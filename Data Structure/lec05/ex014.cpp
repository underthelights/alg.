/*
 * This function implementation has a potential problem.
 * Can you identify the problem and fix it?
 *
 * a
auto
automobile
amobile

 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

void strnins(char*, char*, int);

int main(){
    char s[MAX_SIZE] = "amobile";
    char t[MAX_SIZE] = "uto";
    strnins(s, t, 1);
    printf("%s\n", s);
    return 0;
}

void strnins(char *s, char *t, int i) {
    char buff[MAX_SIZE]={0};

    //1. out of range
    if( i>strlen(s) && i<0) printf("it's out of bounds\n");
    //2. s가 비어있는 경우
    if (!strlen(s)) strcpy(s,t);
    //3. t가 비어있지 않은 경우
    //with strcat strncpy strcpy
    else if(strlen(t)){
        strncpy(buff,s, i);
        printf("%s\n", buff);
        strcat(buff, t);
        printf("%s\n", buff);
        strcat(buff, s+i);
        printf("%s\n", buff);
        strcpy(s, buff);
    };
}