#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
#define FOR(i,n) for(int i=1;i<=n;i++)

int main(){
    O;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2!=0) cout<<" ";
        for(int j=0;j<n;j++)
            cout<<"* ";
        cout<<"\n";
    }
    return 0;
}
