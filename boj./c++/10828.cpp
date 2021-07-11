#include <stack>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main(){
    O;
    int N;
    cin >> N;
    stack<int> st;

    for(int i=0;i<N;i++){
        string cmd = "0";
        cin >> cmd;

        if(cmd == "push") {
            int X;
            cin >> X;
            st.push(X);
        }
        else if(cmd == "pop") {
            if(st.empty())
                cout << -1 << '\n';

            else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if(cmd == "size") {
            cout << (int)st.size() << '\n';
        }
        else if(cmd == "empty") {
            cout << st.empty() << '\n';
        }
        else if(cmd == "top") {
            if(st.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << st.top() << '\n';
            }
        }
    }

    return 0;
}
