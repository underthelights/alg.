#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void swap (int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int gcd(int a, int b){
    int n;
    if (a<b) swap (a,b);
    while(!b==0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(void){
    O;
    int a = 0, b= 0;
    cin>>a >> b;
    cout <<gcd(a,b)<<" "<< lcm(a,b);
    return 0;
}
