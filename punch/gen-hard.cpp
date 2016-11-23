#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;
const int SQ = 505;

const int MUL = 2147483647 / 505;
const int TEMP = MUL / 505;

int main() {
	int tc = 10;
	printf("%d\n", tc);
	for (int t = 0; t < 8; ++t) {
		int N = rand() % (MAXN >> 1) + 1 + (MAXN >> 1);
		assert((MAXN >> 1) <= N && N <= MAXN);
		printf("%d\n", N);
		vector<pair<int, int> > v;
		v.push_back({-2147483647, -2147483647});
		v.push_back({-2147483648, -2147483648});
		
		int X = MUL, Y = TEMP;
		for (int i = 0; i <= N / SQ; ++i) {
			for (int j = 0; j < SQ && (int) v.size() < N; ++j) {
				int x = rand() % X, y = rand() % TEMP;
				if (rand() % 2)
					x = -x;
				if (rand() % 2)
					y = -y;
				v.push_back({x, y});
			}
			X += MUL;
			Y += TEMP;
		}

		random_shuffle(v.begin(), v.end());

		for (int i = 0; i < N; ++i) {
			printf("%d %d\n", v[i].first, v[i].second);
		}
	}
	int num[] = {-2147483648, 2147483647};
	int val[] = {+1, -1};
	for (int t = 0; t < 2; ++t) {
		int N = rand() % (MAXN >> 1) + 1 + (MAXN >> 1);
		printf("%d\n", N);
		vector<pair<int, int> > v;
		int X = MUL, Y = TEMP;
		for (int i = 0; i <= N / SQ; ++i) {
			for (int j = 0; j < SQ && (int) v.size() < N; ++j) {
				int a = rand() % 2, b = rand() % 2;
				int x = num[a] + (rand() % X) * val[a], y = num[b] + (rand() % TEMP) * val[b];
				v.push_back({x, y});
			}
			X += MUL;
			Y += TEMP;
		}

		random_shuffle(v.begin(), v.end());
		for (int i = 0; i < N; ++i) {
			printf("%d %d\n", v[i].first, v[i].second);
		}
	}
	return 0;
}
