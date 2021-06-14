#include <vector>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define max2(a, b) ((a) > (b) ? (a) : (b))
#define max(a, b, c) (max2(max2((a), (b)), (c)))

int main(){
    O;
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    if (v[0] == v[1] && v[1] == v[2])
        cout << 10000 + (v[0] * 1000);
    else if (v[0] == v[1])
        cout << 1000 + (v[0] * 100);
    else if (v[0] == v[2])
        cout << 1000 + (v[0] * 100);
    else if (v[1] == v[2])
        cout << 1000 + (v[1] * 100);
    else
        cout << max(v[0],v[1],v[2]) * 100;

    return 0;
}
