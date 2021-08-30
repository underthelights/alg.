#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
int main(){
    O;
    int a[5]={0}, sum=0;
    for(int i=0;i<5;i++){
        cin>> a[i];
        sum+=a[i];
    }

    sort(a,a+5);
    cout<<sum/5<<"\n"<<a[2];

    return 0;
}
