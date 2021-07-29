#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
int main(){
    O;
    int n=0;LL ans=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        ans += (n / i) * i;
    
    printf("%lld", ans);
}
