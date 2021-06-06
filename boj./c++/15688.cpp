#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#include <algorithm>
using namespace std;
int arr[1000001] = {0};
int main() {
    O;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) cout << arr[i] << "\n";
    return 0;
}
