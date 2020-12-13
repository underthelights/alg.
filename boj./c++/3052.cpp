#include <iostream>
using namespace std;
int main(){
    
    int numarr[10]={0};
    for(int i=0;i<10;i++) std::cin>> numarr[i];
    int numarr2[42]={0}, notif=0;
    
    for(int i=0;i<10;i++) {
        int x = numarr[i]%42;
        numarr2[x]++;
    }
    
    for(int i=0;i<42;i++){
        if(numarr2[i]!=0)
            notif++;
    }
    std::cout<<notif<<"\n";
}
