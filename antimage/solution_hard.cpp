#include <bits/stdc++.h>

using namespace std;

int atk, spAtk, percent, multiplier;
int hp, mp;
int instaDeath;

int cost(int hpLeft, int dmgPerHit) {
	if (hpLeft <= 0) return 0;
	int x = hpLeft / dmgPerHit;
	if (hpLeft % dmgPerHit)
		++x;
	return x;
}

int calc(int hpLeft, int manaBurned) {
	int dmgPerHit = manaBurned * multiplier;
	return min(1 + cost(hpLeft - instaDeath, dmgPerHit), cost(hpLeft, dmgPerHit));
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d", &atk, &spAtk, &percent, &multiplier);
		scanf("%d %d", &hp, &mp);
		instaDeath = hp * percent / 100;
		int ans = 1e9;
		for (int i = 1; ; ++i) {
			ans = min(ans, i + calc(hp - atk * i, min(spAtk * i, mp)));
			if (atk * i >= hp) {
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
