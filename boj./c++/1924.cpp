#include <bits/stdc++.h>

int main(){

    int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    char date[][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int m ,d;
    scanf("%d %d", &m, &d);
    for(int i = 1; i < m; i++){
        d += month[i];
    }
    printf("%s", date[d % 7]);
}
