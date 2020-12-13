#include <iostream>
using namespace std;
int n;
int dp(int n){
    if (n<=1) return 0;
    int a =dp(n/2)+n%2+1;
    int b =dp(n/3)+n%3+1;
    return a<b?a:b;
}

int main() {
    std::cin>>n;
    std::cout<<dp(n);
    return 0;
}
