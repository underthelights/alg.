#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long int

using namespace std;

int main(){

    O;
    int N = 0, M = 0;
    cin >> N;
    vector<int> v(N);
    for(int i=0;i<N;i++) cin>>v[i];
    sort(v.begin(), v.end());

    cin>>M;
    for (int i = 0; i < M; i++){
        int num;
        cin >> num;
        int low = 0, high = N - 1;
        bool searched = false;
        while (low <= high){
            int mid = (low + high) / 2;
            if (v[mid] == num){
                searched = true;
                break;
            }
            else if (v[mid] < num) low = mid + 1;
            else high = mid - 1;
        }
        if (searched) cout << 1 << " ";
        else cout << 0 << " ";
    }
    return 0;
}

