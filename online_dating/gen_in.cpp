#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <string>
#include <string.h>
#include <assert.h>

#define SPECIAL_CASE 16
#define RANDOM_CASE 11
#define raiseError assert(0)

#define N_LIMIT 10000
#define NAME_LENGTH_LIMIT 10
#define DISTANCE_LIMIT 20000

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
void generate(string filename, int limit = -1, int N=-1) {
	FILE *fp = fopen(filename.c_str(), "w+");
	string name = getRandomString(10);
	string preference_str[] = {"F", "FM", "M", "MF"};
	int preference_seed = getRand(0, 3);
	string preference = preference_str[preference_seed];

	if (limit == -1) limit = getRand(1, DISTANCE_LIMIT);
	if (N==-1) N= getRand(1, N_LIMIT);

	fprintf(fp, "%s %s %d\n", name.c_str(), preference.c_str(), limit);
	fprintf(fp, "%d\n", N);
	for (int i=0; i<N; i++) {
		string name = getRandomString(NAME_LENGTH_LIMIT);
		string gender = getRand(0, 1) == 0? "F": "M";
		int dist = getRand(1, min(2*limit, DISTANCE_LIMIT));
		fprintf(fp, "%s %s %d\n", name.c_str(), gender.c_str(), dist);
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
		generate(filename, (getRand(0, 1)?1:-1), (getRand(0,1)?1:-1));
    } else {
		generate(filename, DISTANCE_LIMIT, N_LIMIT);
    }
  }
}
