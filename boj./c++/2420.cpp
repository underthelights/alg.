#include <algorithm>
#include <iostream>
#include <stdlib.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O; LL n=0, m=0;
    cin >> n >> m;
    cout << abs(n-m);
    return 0;
}
