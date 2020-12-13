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
