#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main() {
    O;
    int n=0, num=0;
    while(cin>>n){
        for(int i = 1;i<=n;i++){
            num *=10;
            num ++;
            num %=n;

            if(num==0){
                cout<<i<<"\n";
                break;
            }
        }
    }return 0;



}
