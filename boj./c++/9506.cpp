//
//  boj.kr/9506
//
//  Created. 12.28.
//

#include <iostream>
using namespace std;
int main(){
    int n=0;
    while(true){
        int cnt=0;
        std::cin>>n;
        
        if (n==-1) break;
        for (int i=1;i<n;i++)
            if(n%i ==0)
                cnt+=i;
        
        if (cnt!=n)
            std::cout<< n << " is NOT perfect."<<"\n";
        
        else {
            std::cout<< n << " = 1";
            for (int i=2;i<n;i++)
                if(n%i==0)
                    std::cout<< " + " << i;
            std::cout<<"\n";
        }
        
    }
    return 0;
}
