#include <bits/stdc++.h>

using namespace std;

int main() {
	int t = 20;
	printf("%d\n", t);
	while (t--) {
		int atk, spAtk, percent = rand() % 30 + 1, manaVoid = rand() % 70;
		int hp = rand() % 2000 + 1000, mp = rand() % 2000 + 1000;
		atk = rand() % ((int) (0.1 * hp)) + 1;
		spAtk = rand() % ((int) (0.1 * mp)) + 1;
		printf("%d %d %d %d\n", atk, spAtk, percent, manaVoid);
		printf("%d %d\n", hp, mp);
	}
	return 0;
}
