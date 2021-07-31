#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O;
    LL a,b,c,i;
    cin>>a>>b>>c;
    if(c<=b)
        cout<<"-1";
    else
        cout << a/(c-b) +1;
    return 0;
}
