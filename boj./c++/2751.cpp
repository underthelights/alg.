#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O;

    int arr[100001]={0};

    int n;
    cin >> n;

    for (int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);

    for (int i=0;i<n;i++) cout << arr[i] << "\n";
    return 0;
}
 
