#include<iostream>
using namespace std;
#define MNUM 1000001
int m[MNUM][20];

int main(void) {
    int n;
    cin>> n;
    
    for (int i = 0; i < 20; i++) m[0][i] = 1;
         
    for (int i = 1; i <= n; i++) {
        m[i][0] = 1;
        for (int j = 1; j < 20; j++) {
            if (i < (1 << j))
                m[i][j] = m[i][j - 1];
            else m[i][j] = (m[i][j - 1] + m[i - (1 << j)][j]) % 1000000000;
        }
    }
    cout << m[n][19] <<"\n";
    return 0;
}
