#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)


int main(void){
    O;
    int n=0;
    int a=0, cntn=0, cnty=0;
    cin >> n;
    while (n--){
        cin >> a;
        (a==1)? cnty++:cntn++;
    }
    (cnty>cntn)? cout<<"Junhee is cute!" : cout<<"Junhee is not cute!";
    return 0;
}

