#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
int main(){
    O;
    int n=0;
    cin>>n;
    int car[5]={0};
    for (int i=0;i<5;i++) cin>>car[i];

    int cnt=0;
    for (int i=0;i<5;i++) if(n==car[i]) cnt++;

    cout<<cnt;
    return 0;
}
