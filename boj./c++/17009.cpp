#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main(){
    O;
//    FILE *fp = freopen("input.txt","r", stdin);

    int x[6]={0}, a, b, t;
    for(int i=0;i<6;i++)cin>>x[i];
    a = x[0]*3+x[1]*2+x[2]*1;
    b = x[3]*3+x[4]*2+x[5]*1;

    if(a>b) cout<<"A";
    else if(b>a) cout<<"B";
    else cout<<"T";
//    fclose(fp);

    return 0;
}
