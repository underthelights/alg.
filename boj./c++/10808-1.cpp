#include <bits/stdc++.h>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main(){
    O;
    int freq[26]={0};
    string s={0};cin>>s;
    for (auto c : s)
        freq[c-'a'] ++;
    for (int i=0;i<26;i++) 
        cout <<freq[i]<<' ';
    return 0;
}
