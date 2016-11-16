#include <bits/stdc++.h>

using namespace std;

set<long long> sx, sy, sxminy, sxplusy;

int main() {
	int n, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &x, &y);
		sx.insert(x);
		sy.insert(y);
		sxminy.insert((long long) x - y);
		sxplusy.insert((long long) x + y);
	}
	printf("%d\n", (int) (sx.size() + sy.size() + sxminy.size() + sxplusy.size()));
	return 0;
}
