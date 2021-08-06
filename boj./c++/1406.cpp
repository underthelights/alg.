#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long

int main(){
    O;
    string s;cin>>s;
    list<char> l;
    for(auto c:s) l.push_back(c);

    auto cursor = l.end();

    int x=0;cin>>x;
    for(int i=0;i<x;i++){
        char op=0;cin>>op;
        if (op =='L'){
            if(cursor != l.begin()) cursor--;
        }else if (op =='D'){
            if(cursor != l.end()) cursor++;
        }else if (op =='B'){
            if(cursor != l.begin()){
                cursor--;
                cursor = l.erase(cursor);
            }
        }else if (op =='P'){
            char xp=0;cin>>xp;
            l.insert(cursor, xp);
        }
    }
    for(auto c:l) cout << c;
    return 0;
}
