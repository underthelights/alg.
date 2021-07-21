#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O; int n=0, m=0;
    cin >> n >> m;
    int sol=0;
    for (int i=1;i<=m;i++){
        int x = i*n;
        string s = to_string(x);
        reverse (s.begin(),s.end());
        sol = max(sol, atoi(s.c_str()));
    }
    cout << sol << "\n";
    return 0;
}
