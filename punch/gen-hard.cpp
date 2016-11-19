#include <bits/stdc++.h>

using namespace std;

const int N = 100000;
const int SQ = 505;

const int MUL = 2147483647 / 505;
const int TEMP = MUL / 505;

int main() {
	printf("%d\n", N);
	vector<pair<int, int> > v;
	v.push_back({-2147483647, -2147483647});
	v.push_back({-2147483648, -2147483648});
	
	int X = MUL, Y = TEMP;
	for (int i = 0; i <= N / SQ; ++i) {
		for (int j = 0; j < SQ && (int) v.size() < N; ++j) {
			v.push_back({rand() % X, rand() % TEMP});
		}
		X += MUL;
		Y += TEMP;
	}

	random_shuffle(v.begin(), v.end());

	for (int i = 0; i < N; ++i) {
		printf("%d %d\n", v[i].first, v[i].second);
	}
	return 0;
}
