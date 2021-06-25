#include <algorithm>
#include <iostream>
#include <stdlib.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int** make2dArray(int rows, int cols) {
    int **x, i;
    /* allocate memory for row pointers */
        x = (int**)malloc(rows*sizeof(*x));
    /* allocate memory for each row */
    for(i = 0; i < rows; i++)
        x[i] = (int*)malloc(cols * sizeof(**x));
    return x;
}

int main(){
    O;
    int row, col;
    cout<<"insert row ";cin>>row;
    cout<<"insert column ";cin>>col;

    int** A = make2dArray(row,col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            A[i][j] = rand()%100;
            cout<<A[i][j]<<" ";
        }cout<<"\n";
    }
    free(A);
    return 0;
}
