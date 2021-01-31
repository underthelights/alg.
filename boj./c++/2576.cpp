#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
int main(){
    O;
    int arr[7]={0};
    int sum = 0, min = 100;
    for (int i = 0; i < 7; i++) cin>>arr[i];

    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 1) {
            sum += arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
    }

    if (sum == 0) {
        cout << "-1";
        return 0;
    }
    else if (sum!=0){
        cout << sum << "\n" << min<<"\n";
        return 0;
    }
}
