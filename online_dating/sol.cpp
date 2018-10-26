#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool prefer[2]={false, false};
enum gender_type { FEMALE, MALE };

int main(void) {
	string s, preference; int limit;
	cin	>> s >> preference >> limit;

	for (auto c: preference) {
		if (c =='F') {
			prefer[FEMALE] = true;
		} else if (c =='M') {
			prefer[MALE] = true;
		}
	}

	vector<string> res;
	int N; scanf("%d", &N);

	for (int i=0; i<N; i++) {
		string name, sex; int dist;
		cin >> name >> sex >> dist;

		if (dist > limit) {
			continue;
		}

		if (sex == "F" && prefer[FEMALE]) {
			res.push_back(name);
		} else if (sex == "M" && prefer[MALE]) {
			res.push_back(name);
		}
	}

	if (res.empty()) {
		cout << "No one yet\n";
	} else {
		sort(res.begin(), res.end());
		for (auto &name : res) {
			cout << name << endl;
		}
	}

	return 0;
}
