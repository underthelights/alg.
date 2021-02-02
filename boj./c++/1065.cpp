#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
bool check(int n);

int main() {
    O;
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (check(i) == true)
            ans += 1;

    cout << ans;

    return 0;
}

bool check(int n) {
    int digit1 = n / 100; //백의 자리
    int digit2 = (n / 10) % 10; //십의 자리
    int digit3 = n % 10; //일의 자리
    int diff1 = digit1 - digit2;
    int diff2 = digit2 - digit3;

    if (n < 100 || diff1 == diff2) return true;
    else return false;
}
