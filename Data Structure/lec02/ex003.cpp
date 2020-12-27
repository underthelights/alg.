/*
    creation date : 2020.12.27. 2130
    lec01/ex003
*/

#include <stdio.h>
#include <iostream>
using namespace std;
void print(int *p, int row){
    std::cout<< "address" << "\n";
    for(int i=0;i<row;i++) {
        printf("%8p%5d\n", p+i, *(p+i));
    }
    std::cout<<"\n";
}

int main(){
    int arr[]={0, 2, 4, 5, 6};
    print(arr, 5);
    return 0;
}
