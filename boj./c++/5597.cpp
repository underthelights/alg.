#include <algorithm>
#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main() {
    O;
    bool chk[31]={0};
    for (int i = 0; i < 28; i++) {
        int ok;
        cin >> ok;
        chk[ok] = true;
    }
    for (int i = 1; i <= 30; i++)
        if (!chk[i])
            cout << i << '\n';

   return 0;
}
