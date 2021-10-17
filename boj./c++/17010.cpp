#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
#define FOR(i,n) for(int i=1;i<=n;i++)

int main(){
    O;
//    FILE *fp = freopen("input.txt","r", stdin);

    int n;cin>>n;
    while (n--){
        int num;cin>>num;
        char x;cin>>x;
        for(int i=0;i<num;i++) cout<<x;
        cout<<"\n";
    }

//    fclose(fp);
    return 0;
}
