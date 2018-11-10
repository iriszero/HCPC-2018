#include <cstdio>
#include <cassert>
#include <testlib.h>

using namespace std;
int main(int argc, char **argv){
    FILE *in = fopen(argv[1],"r");
    FILE *sol = fopen(argv[2],"r");
    FILE *out = fopen(argv[3],"r");

	double judge, user;
	fscanf(sol, "%lf", &judge);
	fscanf(out, "%lf", &user);

	assert(doubleCompare(judge, result, 1e-6));

	fclose(in); fclose(sol); fclose(out);
    return 0;
}
