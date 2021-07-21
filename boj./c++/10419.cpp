#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O;
    int N=0, t=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> t;
        int ans=0;
        for (int j=1;j<=t;j++)
            if (j + pow(j,2) <=t) ans +=1;
        printf("%d\n", ans);
    }


    return 0;
}
