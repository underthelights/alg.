#include <iostream>
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#include<algorithm>
#include<vector>
using namespace std;

#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))  

#define Max_size 50000
typedef struct {
    int key;
} element;
element list[Max_size];

void heapsort(element list[], int n);
void adjust (element list[], int root, int n);
/* fn explanation

 * heapsort : perform heapsort on the array
 * adjust : binary tree to establish the heap
 * */
   void swap_new(element,element,element);
   void heapsort(element list[], int n){
    element temp;
    for (int i=n/2;i>0;i--) adjust (list,i,n);
    for (int i=n-1;i>0;i--){
        swap_new(list[1], list[i+1], temp);
        adjust(list,1,i);
    }
   }

void adjust (element list[], int root, int n){
    int child, rootkey;
    element temp;
    temp = list[root];
    rootkey = list[root].key;
    child = 2*root;

while(child<=n){
    if((child<n) && (list[child].key < list[child+1].key)) child++;
    if(rootkey > list[child].key) break;
    else{
        list[child/2] = list[child];
        child*=2;
    }
}list[child/2] = temp;

}
void swap_new(element a,element b,element c){
    a=b;
    b=c;
    c=a;
    return;
}