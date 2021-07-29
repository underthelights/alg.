#include <iostream>
#include <algorithm>
#include <vector>
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<int> v;
int n;
int solution(){
    sort(v.begin(), v.end());
    return v[0]*v[n-1];
}
int main() {
    O;

    cin>>n;
    for(int i=0;i<n;i++) {
        int x=0;
        cin>>x;
        v.push_back(x);
    }
    cout << solution() <<"\n";
    return 0;
}
