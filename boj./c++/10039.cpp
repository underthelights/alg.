#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main(void){
    O;
    int a[5] = {0};
    for(int i=0;i<5;i++){
        cin>> a[i];
        if (a[i]<40) a[i] = 40;
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum += a[i];
    }
    sum/=5;
    cout<<sum;
    return 0;
}

