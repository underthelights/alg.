#include <algorithm>
#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int a,b,c,x[10],i;

bool is_palindrome(string s){

    string s_reverse = s;
    reverse(s_reverse.begin(), s_reverse.end());
    return s == s_reverse ? true : false;

}

int main() {
    O;
    string s_0= "";
    cin >> s_0;

    cout << is_palindrome(s_0) << '\n';

    return 0;
}


