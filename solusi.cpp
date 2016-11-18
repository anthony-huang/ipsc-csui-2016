#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>

using namespace std;

int maxHp, maxMp, dmgHp, dmgMp, manaVoid, scythe;

int binSer(int dmg, int ki, int ka) {
    //printf("%d\n",dmg);
    //printf("* %d\n",maxHp * scythe / 100);
    //printf("* %d\n",dmg / dmgHp * dmgMp * manaVoid);
    int mpLoss = min(maxMp, dmg / dmgHp * dmgMp);
    if (ka - ki <= dmgHp) return dmg/dmgHp + 1;
    if (maxHp - dmg > maxHp * scythe / 100 && maxHp > dmg + mpLoss * manaVoid) {
        return binSer(dmg + (ka - dmg)/2, dmg, ka);
    } else {
        return binSer((ki + dmg)/2, ki, dmg);
    }
}

int main() {
    int tc;
    scanf("%d %d %d %d %d",&dmgHp,&dmgMp,&manaVoid,&scythe,&tc);
    while (tc--) {
        scanf("%d %d",&maxHp,&maxMp);
        printf("%d\n",binSer(maxHp/2, 0, maxHp));
    }
    return 0;
}
