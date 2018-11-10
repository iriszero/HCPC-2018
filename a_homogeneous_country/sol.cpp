#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


typedef long long ll;
int main(void) {
	string s;
	map<string, int> m;
	ll cnt = 0;
	while(cin >> s) {
		m[s]++;
		cnt++;
	}

	ll a = 0, b = cnt * cnt;
	for (auto it=m.begin(); it!=m.end(); it++) {
		a += it->second * it->second;
	}
	printf("%12lf\n", 1-a/double(b));
	return 0;
}
