#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    int res = n;
    int a=0,b=0,c=0,d=0,cnt=0;
    
    while(1){
        a=n/10;
        b=n%10;
        c=(a+b)%10;
        d=(b*10)+c;
        n=d;
        cnt++;
        if(d==res) break;
    }
    std::cout << cnt ;
    return 0;
}
