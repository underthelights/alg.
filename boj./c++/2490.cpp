#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O;
    int flag =3;
    while (flag--){
        int a[4] = {0}, bae =0, deung = 0;
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        for (int j=0;j<=3;j++){
            a[j] ==0? bae++:deung++;
        }
        if(bae ==1 && deung ==3) cout << "A\n";
        else if(bae ==2 && deung ==2) cout << "B\n";
        else if(bae ==3 && deung ==1) cout << "C\n";
        else if(bae ==4 && deung ==0) cout << "D\n";
        else if(bae ==0 && deung ==4) cout << "E\n";
    }
//    for(int i=0;i<3;i++){
//        cout <<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3] <<"\n";
//    }


    return 0;
}
