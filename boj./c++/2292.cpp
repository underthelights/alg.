#include<algorithm>
#include<iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main(){
    O;

    int n=0,i =0;
    cin>>n;
    if(n==1) i = 1;

    for(int sum=2;sum<=n;i++)
        sum+=6*i;
    cout<<i;
    return 0;
}
