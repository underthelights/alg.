#include <algorithm>
#include <iostream>
#include <stdlib.h>

using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define MAX_SIZE 100
int main() {
    int i, n, m, *data;
    cout <<"how many integers do you want to generate?";
    cin>> n;
    data = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        data[i] = rand();
        printf("%3d: %8d\n", i+1, data[i]);
    }

    cout <<"how many integers do you want to generate additionally?";
    cin >> m;
    data = (int*)realloc(data, (n+m)*sizeof(int));
    for(i; i<n+m; i++)
        data[i] = rand();
    for(i=0; i<n+m; i++)
        printf("%3d: %8d\n", i+1, data[i]);

    free(data);
}

/*
int main(){
    int i, n;
    int *data = (int*)malloc(n*sizeof(int));
    cout <<"how many integers do you want to generate?";
    cin>> n;

    for(i=0;i<n;i++){
        data[i] = rand()%100;
        cout<<data[i]<<"\n";
    }free(data);
}
 * 04-1
int main(){
    int i, n, data[MAX_SIZE];
    printf("How many integers do you want to generate? ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        data[i] = rand();
        printf("%d\n", data[i]);
    }
}
 */
