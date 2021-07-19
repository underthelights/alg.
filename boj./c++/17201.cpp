#include <iostream>
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define For(i,j) for(int i=0;i<j;i++)

using namespace std;

int main(){
    O;
    int T=0;
    cin >> T;
    char blo[20];
    cin >> blo;

    For(i,T){
        if(blo [2*i-1] - blo [2*i] ==0) {
            cout<<"No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
