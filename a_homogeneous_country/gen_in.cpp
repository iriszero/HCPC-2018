#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <string>
#include <string.h>
#include <assert.h>

#define SPECIAL_CASE 5
#define RANDOM_CASE 22
#define raiseError assert(0)

#define N_LIMIT 100000

using namespace std;
typedef long long ll;

/* Global Variable */
std::mt19937 gen;
/////////////////////

ll getRand(ll low, ll high) {
    std::uniform_int_distribution<ll> dis(low, high);
    ll val = dis(gen);
    assert(low <= val && val <= high);
    return val;
}

string getRandomString(int length) {
	string res;
	for (int i=0; i<length; i++) {
		res += string(1, getRand(0, 25) + 'A' + ('a' - 'A') * getRand(0, 1));
	}
	return res;
}
void generate(string filename, int N) {
	FILE *fp = fopen(filename.c_str(), "w+");


  for (int i=0; i<N; i++) {
    string name = getRandomString(2);
    fprintf(fp, "%s\n", name.c_str());
  }

	fclose(fp);
}
void init() {
  std::random_device rd;  //Will be used to obtain a seed for the random number engine
  gen = mt19937(rd()); //Standard mersenne_twister_engine seeded with rd()
}
int main(int argc, const char* argv[]) {

  init();
  for (int i=1; i<=SPECIAL_CASE+RANDOM_CASE; i++) {
    string filename;
    filename = "data/" + to_string(i) + ".in";

    if (i<=SPECIAL_CASE) {
		FILE *fp = fopen(filename.c_str(), "w+");
		// All the same
		for (int k=0; k<i; k++) {
			fprintf(fp, "a\n");
		}
		fclose(fp);		
    } else {
		generate(filename, N_LIMIT);
    }
  }
}
