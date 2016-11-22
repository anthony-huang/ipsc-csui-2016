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
pair<int, int> damage[2][1000005];

int dynPro(int dmg, int ki, int ka) {
    //printf("%d\n",dmg);
    //printf("* %d\n",maxHp * scythe / 100);
    //printf("* %d\n",dmg / dmgHp * dmgMp * manaVoid);
    int mpLoss = min(maxMp, dmg / dmgHp * dmgMp);
    if (ka - ki <= dmgHp) return dmg/dmgHp + 1;
    if (maxHp - dmg > maxHp * scythe / 100 && maxHp > dmg + mpLoss * manaVoid) {
        return dynPro(dmg + (ka - dmg)/2, dmg, ka);
    } else {
        return dynPro((ki + dmg)/2, ki, dmg);
    }
}

int main() {
    int tc;
    scanf("%d %d %d %d %d",&dmgHp,&dmgMp,&manaVoid,&scythe,&tc);
    while (tc--) {
        scanf("%d %d",&maxHp,&maxMp);

        damage[0][0] = make_pair(dmgHp, min(maxMp, dmgMp));
        int totalDmgHp = dmgHp;
        int totalDmgMp = min(maxMp, dmgMp);
        int ct = 1;
        while (totalDmgHp < (maxHp * (100 - scythe) / 100)) {
            totalDmgHp += dmgHp;
            totalDmgMp = min(maxMp, totalDmgMp + dmgMp);
            damage[0][ct] = make_pair(totalDmgHp, totalDmgMp);
            ct++;
        }
        //printf("%d %d %d\n", totalDmgHp, totalDmgMp, ct);
        int count1 = ct;
        //printf("zz\n");
        damage[1][1] = make_pair(damage[0][0].first + dmgMp * manaVoid, damage[0][0].second);
        totalDmgHp = damage[1][1].first;
        totalDmgMp = damage[1][1].second;
        ct = 2;
        while (totalDmgHp < (maxHp * (100 - scythe) / 100)) {
            //cout << "* " << damage[0][ct-1].first + damage[0][ct-1].second * manaVoid << " " << damage[1][ct-1].first + damage[1][ct-1].second * manaVoid << "\n";
            if (damage[0][ct-1].first + damage[0][ct-1].second * manaVoid > damage[1][ct-1].first + damage[1][ct-1].second * manaVoid) {
                totalDmgHp = damage[0][ct-1].first + damage[0][ct-1].second * manaVoid;
                totalDmgMp = damage[0][ct-1].second;
            } else {
                totalDmgHp = damage[1][ct-1].first + damage[1][ct-1].second * manaVoid;
                totalDmgMp = damage[1][ct-1].second;
            }
            damage[1][ct] = make_pair(totalDmgHp, totalDmgMp);
            //printf("%d %d\n", totalDmgHp, totalDmgMp);
            ct++;
        }
        //printf("%d %d %d\n", totalDmgHp, totalDmgMp, ct);
        printf("%d",min(ct, count1));
    }
    return 0;
}
