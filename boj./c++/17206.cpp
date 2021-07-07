#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main() {
    O;
    int array[80001] = {0}, T = 0, N = 0;
    for (int i = 1; i <= 80000; i++) {
        if (i % 3 == 0 || i % 7 == 0) array[i] = array[i - 1] + i;
        else array[i] = array[i - 1];
    }
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >>N;
        cout << array[N]<<"\n";
    }
    return 0;
}
