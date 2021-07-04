
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(){
    char s[] = "dog", t[]="house", u[] = "rainbow";
    printf("%s %s %s\n", s,t,u);
    strcat(s,u);
    printf("%s %s %s\n", s,t,u);
    return 0;

}

