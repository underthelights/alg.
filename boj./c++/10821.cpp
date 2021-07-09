#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#include <string>
using namespace std;
int main() {
    O;
    string k;
    int cnt = 0;
    cin >> k;
    for (int i = 0; i < k.size(); i++)
        if (k[i] == ',')
            cnt++;

    cout << cnt + 1 << '\n';
}
