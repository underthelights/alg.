#include <iostream>
#include <vector>
#include <stack>
#include <string>
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main()
{
    O;
    int iSize = 0;

    cin >> iSize;

    for (scanf("%d",&iSize);iSize--;){
    //cin>>iSize는 안됨!
//    for (int i = 0; i < iSize; ++i){
        stack<char> st;
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); ++j)
        {
            if (st.empty() || s[j] == '(') st.push(s[j]);
            else if (st.top() == '(') st.pop();
        }

        if (st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
