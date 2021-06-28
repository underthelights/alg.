#include <algorithm>
#include <iostream>
#include <queue>
#include <functional>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main() {
    O;
    int n = 0;
    cin >> n;
    priority_queue<int, vector<int>> pq;
    while (n--) {
        int x;
        cin >> x;
        if (x==0) {
            if(!pq.empty()){
                cout << pq.top() << "\n";
                pq.pop();
            }
            else cout << "0\n";
        }else pq.push(x);
    }return 0;
}
