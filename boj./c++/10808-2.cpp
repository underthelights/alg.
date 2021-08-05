#include <bits/stdc++.h>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main(){
    O;
    
    string s={0};cin>>s;
    for (char a = 'a';a<='z';a++){
        int cnt = 0;
        for (auto c : s)
            if(a==c) cnt++;
            cout << cnt << ' ';
    }
}
