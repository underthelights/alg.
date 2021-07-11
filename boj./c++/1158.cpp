#include<stdio.h>
using namespace std;
int main(){
    int x[5010]={0};
    int n,k,i=0;
    int w = 0;

    scanf("%d%d",&n,&k);

    //initialization
    while(i++^n) x[i] = i;
    printf("<");

    while(n){
        w = (w + k) % n;
        if(!w)
            w = n;
        // one man left
        if(n == 1)
            printf("%d>", x[1]);
        // n-- man
        else {
            printf("%d, ", x[w]);
            for (i = w; i ^ n; i++){
                x[i] = x[i + 1];
//                printf("!%d!\n", x[i]);
            }w--;
        }n--;
    }return 0;
}
