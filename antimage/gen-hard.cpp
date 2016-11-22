#include <bits/stdc++.h>

using namespace std;

int main() {
	int t = 20;
	printf("%d\n", t);
	while (t--) {
		int atk, spAtk, percent = rand() % 30 + 1, manaVoid = rand() % 10 + 1;
		int hp = rand() % 30000 + 20000, mp = rand() % 30000 + 20000;
		atk = rand() % ((int) (0.01 * hp)) + 1;
		spAtk = rand() % ((int) (0.01 * mp)) + 1;
		printf("%d %d %d %d\n", atk, spAtk, percent, manaVoid);
		printf("%d %d\n", hp, mp);
	}
	return 0;
}
