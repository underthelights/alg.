#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#include <algorithm>
#include <math.h>
using namespace std;
int arr[1000001] = {0};
int main() {
    O;
    int n=0, Cs = 0, C=0;
    double Gs = 0, G=0;
    int m=0;
    cin>>m;
    for(int j=0;j<(m);j++){
        cin >> n;
        for (int i =0;i<n;i++){
            cin >> C >> G;
            Cs +=C;
            Gs +=C*G;
        }
        printf("%d %.1f\n", Cs, round(10*Gs/Cs)/10);
        Gs = 0, Cs = 0;
    }
    return 0;
}


