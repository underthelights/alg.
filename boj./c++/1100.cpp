#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O;
    char map[8][8] = {0};
    for (int i=0;i<8;i++) cin >> map [i];
    int cnt = 0;

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++){
            if ((i + j) % 2 == 0 && map[i][j] == 'F') cnt++;
        }
    printf("%d\n",cnt);

    return 0;

}
