#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
int main(){
    O;
    int n;cin >>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++) cout <<" ";
        for(int j=0;j<2*n-1 - 2*i;j++) cout <<"*";
        cout <<"\n";
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout <<" ";
        for(int j=0;j<2*i+1;j++) cout <<"*";
        cout <<"\n";
    }
    return 0;
}
