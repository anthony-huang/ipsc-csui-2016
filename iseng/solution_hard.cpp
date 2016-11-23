#include <bits/stdc++.h>

using namespace std;

long long N;

int main() {
	scanf("%lld",&N);
	if (N == 1) printf("Juan\n"); else {
		for (long long i = 2; i * i <= N; i++) {
			if (N % i == 0) {
				if (i * i == N) printf("Juan\n"); else printf("Pedro\n");
				return 0;
			}
		}
		printf("Diego\n");
	}
}