#include <iostream>
#include <string>

#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;
int s[1001][1001];

int main() {
    O;
    string str = "hello";
    cout << str<<"\n";
    string str2 = "world";
    str = str+' ';
    str += str2;
    cout << str;

    int size=str.size();
    string str3;
    cin >> str3;
    str3.pop_back();
    cout << str3 <<"\n";
    return 0;

}
