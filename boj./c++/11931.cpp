#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000000] = {0};

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N; 
    cin >> N;

    for(int i = 0 ; i < N; i++)
        cin >> arr[i];
    
    sort(arr,arr+N,greater<int>());

    for(int i = 0 ; i <N; i++)
        cout << arr[i] << "\n";
            
    return 0;
}
//sort(v.begin(), v.end(), greater<자료형>());    //내림차순 (Descending order)
//sort(v.begin(), v.end(), less<자료형>());        //오름차순 (default = Ascending order)
//출처: https://blockdmask.tistory.com/178 [개발자 지망생]
