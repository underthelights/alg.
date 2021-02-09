#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long int

using namespace std;
void fn(int i, int s){
    if (i ==-1)
        return;
    for (int j = 0; j<i; j++)cout << " ";
    cout << "*";
    for (int j = 0; j < s; j++)cout << " ";
    cout << "*\n";
    fn(i-1, s+2);
}
int main(){

    O;
    int N=0;
    cin >> N;

    if(N%2!=0){
        for(int i=0;i<N;i++){
            cout<<"*";
        }cout<<"\n";
        for(int i=0;i<N/2;i++) cout<<" ";
        cout<<"*";
        cout<<"\n";
        fn(N/2 - 1, 1);
    }
    else cout<<"I LOVE CBNU"<<"\n";
    return 0;
}

