#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main(){
    O;
    int a=0, b=0;

    cin>>a>>b;

    int n=0;
    cin>>n;

    if(a+b>=2*n) cout << a+b-2*n;
    else cout << a+b;
    return 0;
}
