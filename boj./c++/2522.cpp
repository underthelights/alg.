#include <stdio.h>
#include <math.h>

int main(){
    int n=0;
    scanf("%d",&n);

    for(int i=1;i<=2*n-1;++i){
        for(int j=1;j<=abs(n-i);++j)
            printf(" ");
        for(int j=1;j<=n-abs(n-i);++j){
            printf("*");
        }printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
#include <math.h>

int main(){
    int n=0;
    scanf("%d",&n);

    for(int i=0;i<=2*n;++i){
        for(int j=1;j<=abs(n-i);++j)
            printf(" ");
        for(int j=1;j<=n-abs(n-i);++j){
            printf("*");
        }printf("\n");
    }
    return 0;
}*/
