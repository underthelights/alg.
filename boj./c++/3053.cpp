#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

#include <cmath>
#define PI 3.1415926535897932
using namespace std;

int main() {
    O;
    long double R;
    cin>>R;
    cout<<fixed;

    cout.precision(6);
    cout<<powl(R, 2) * PI<<'\n';
    cout<<powl(R, 2) * 2<<'\n';
    return 0;
}
