#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

pair<int, int> dmg[2];
int hp, mp;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d", &dmg[0].fi, &dmg[0].se, &dmg[1].fi, &dmg[1].se);
		scanf("%d %d", &hp, &mp);
		int instaDeath = hp * dmg[1].fi / 100;
		int manaBurned = 0;
		int ans = 0;
		while (hp > instaDeath && hp > manaBurned * dmg[1].se) {
			hp -= dmg[0].fi;
			manaBurned = min(manaBurned + dmg[0].se, mp);
			++ans;
		}
		if (hp > 0) {
			++ans;
		}
		printf("%d\n", ans);
	}
	return 0;
}
