/*
    creation date : 2020.12.27. 2125
    lec01/ex002
*/

#include <iostream>

#define max 100
float sum(float a[], int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return sum;
}

int main(){
    float input[max]={0};
    for(int i=0;i<max;i++) input[i] = i;
    float answer = sum(input, max);
    std::cout<< "the sum is : "<< answer << "\n";
    return 0;
}
