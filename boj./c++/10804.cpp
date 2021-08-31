#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define FOR(i,n) for(int i=1;i<=n;i++)
int main(){
    O;

    int card[22]={0};
    FOR(i,20) card[i]=i;
    
    FOR(i, 10){
        int a,b;
        cin>> a>>b;
        reverse(card+a, card+b+1);

    }

    FOR(i,20) cout << card[i]<<" ";
    return 0;
}
