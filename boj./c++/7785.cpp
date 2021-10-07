#include <bits/stdc++.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
#define FOR(i,n) for(int i=1;i<=n;i++)

int main(){
    O;
    unordered_set<string> s;
//    FILE *fp = freopen("input.txt","r", stdin);
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        string name, chulgun;
        cin >> name >> chulgun;
        if (chulgun == "enter")
            s.insert(name);
        else
            s.erase(name);
    }
    vector<string> answer(s.begin(), s.end());
    sort(answer.begin(),answer.end(), greater());
    for (auto x : answer)
        cout << x<<"\n";
//    fclose(fp);
    return 0;
}
