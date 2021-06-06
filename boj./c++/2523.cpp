#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main() {
    O;
    int n=0, num=0;
    cin >>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        } cout << '\n';
    } 

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        } cout << '\n';
    }return 0;
}
