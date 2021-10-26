#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void rot(string st){
    for(auto x:st){

        if(x==' ') cout<<" ";

        else if(x>='A' && x<='M') {
            x +=13;
            cout<<x;
        }

        else if(x>='N' && x<='Z') {
            x -=13;
            cout<<x;
        }

        else if(x>='a' && x<='m') {
            x +=13;
            cout<<x;
        }

        else if(x>='n' && x<='z') {
            x -=13;
            cout<<x;
        }

        else cout<<x;

    }
}
int main(){
    O;

    int n;

    string st;
    getline(cin,st);

    rot(st);
    return 0;
}
