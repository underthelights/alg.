#include <string>
#include <stack>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define Y return "YES"
#define N return "NO"
string sol(string str){
    stack<int> st;
    for (int i=0;i<(int)str.size();i++){
        if(str[i] == '(') st.push('(');
        else{
            if(st.empty()) N;
            st.pop();
        }
    }
    if(!st.empty()) N;
    else Y;
}
int main(){
    O;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string str="0";
        cin>>str;
        cout<<sol(str)<<"\n";
    }
    return 0;
}
