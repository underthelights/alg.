#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long int

using namespace std;

int main(){

    O;int N=0;
    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++) cout<<"*";
        for(int j=0;j<2*(N-i-1);j++) cout<<" ";
        for(int j=0;j<i+1;j++) cout<<"*";
        cout << "\n";
    }
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++) cout<<"*";
        for(int j=0;j<2*(i+1);j++) cout<<" ";
        for(int j=0;j<N-i-1;j++) cout<<"*";
        cout << "\n";
    }

    return 0;
}

