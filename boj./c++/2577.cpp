#include <iostream>
using namespace std;
int main(){
    int a=0, b=0, c=0;
    std::cin >> a >> b >> c;
    int ans=a*b*c, numarr[10]={0};
    
    for(;true;){
        numarr[ans%10]++;
        if(ans/10==0)break;
        ans/=10;
    }
    for(int i=0;i<=9;i++)
        std::cout<<numarr[i]<<"\n";
}

/*
#include <algorithm>
#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int a,b,c,x[10],i;

int main() {
    O;
    cin >> a >> b >> c;
    a*=b*c;
    while(a){
        x[a%10]++;
        a/=10;
    }
    for(i=0;i<10;i++)
        cout << x[i] <<"\n";
   return 0;
}
*/
