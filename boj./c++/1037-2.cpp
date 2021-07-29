#include <iostream>
#include <algorithm>
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main() {
    O;
    int n=0, arr[51]={0};
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr + n);
    cout << arr[0] * arr[n-1];
    return 0;
}
