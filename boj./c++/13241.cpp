#include <algorithm>
#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long int
LL gcd(LL a, LL b)
{
    LL c;
    while (b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
LL lcm (LL a, LL b){
    return (a*b)/gcd(a,b);
}
int main(void){
    O;
    LL a= 0, b=0;
    cin>> a >> b;
    cout << lcm(a,b);
    return 0;
}

