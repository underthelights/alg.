#include <algorithm>
#include <iostream>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define LL long long
int printarray(double array[], int s){

    for (int i=0;i<s;i++)
        cout<<array[i]<<" ";
    cout<<"\n";
    return 0;
}
int main(){
    O;
    int n=0;
    cin>>n;
    double* arr = (double*)malloc(sizeof(double)*n);

    for(int i=0;i<n;i++) cin>>arr[i];
    //printarray(arr, n);

    double max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    //cout<<"max"<<max;
    double sum=0;

    for(int i=0;i<n;i++) {
        sum += ((double)arr[i]/(double)max * 100.0);
    }
  //  printarray(arr, n);
    printf("%0.4lf", (double)sum/n);

    free(arr);
    return 0;
}
