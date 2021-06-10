#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define PI 3.141592

int main(){
    O;
    int a, b;
    cin >> a >> b;
    printf("%.6f", a*2 + 2*b*PI);

    return 0;
}
