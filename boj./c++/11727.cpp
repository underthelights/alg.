#include <iostream>
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

using namespace std;
LL d[1001]={0};
LL f(int n);

int main(){
    O;
    int n;
    cin>>n;
    cout << f(n)<<"\n";
     

    return 0;
}

LL f(int n){
    if(d[n]) return d[n];
    if(n==1) return 1;
    if(n==2) return 3;
    
    return d[n]=(f(n-1)+2*f(n-2))%10007;
}
