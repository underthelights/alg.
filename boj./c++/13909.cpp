#include <iostream>
using namespace std;
#define LL long long

int main(void){
    LL n,i;
    cin >> n;
    for(i=1;i*i<=n;i++);
	cout<<i-1;

    return 0;
}
