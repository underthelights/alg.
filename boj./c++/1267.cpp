#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
#define FOR(i) for(int i=0;i<N;i++)
int main(){
    O;
    int y=0, m=0, call[10001]={0}, N=0;
    cin >> N;
    FOR(i) cin >> call[i];

    FOR(i){
        y+=(call[i]/30+1)*10;
        m+=(call[i]/60+1)*15;
    }

    if(y<m) cout <<"Y " << y;
    else if (y>m) cout <<"M " << m;
    else cout <<"Y M " << y;

    return 0;
}
