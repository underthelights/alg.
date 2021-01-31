#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
int main(){
    O;
    int N, T;
    cin>>T;
    int *arr= (int *)malloc(sizeof(int)*T);
    for (int i = 0; i < T; i++) {
        int sum = 0;
        cin>>N;
        for (int j = 0; j < N; N--)
            if (N % 2 == 1) sum += N;
        arr[i] = sum;
    }
    for (int i = 0; i < T; i++) cout << arr[i] << "\n";
    
    free(arr);
    return 0;
}
