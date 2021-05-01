#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O;
    vector<int> a;
    int n, x;
    cin >> n;

    for(int i=0; i<n; i++){//입력 받고 push하기
        cin >> x;
        a.push_back(x);
    }


    int y=0, cnt=0;
    cin >>y;
    for(int i=0;i<n; i++){
        if(a[i] ==y)
            cnt++;
    }
    cout << cnt ;
    return 0;
}
