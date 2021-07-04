#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//print the end part of the sentence
int main() {

    char pat[] = "world";
    char str[] = "Hello world I am a student.";

    if(char *t = strstr(str, pat))
        printf("The string returned by strstr is: %s\n", t);

    else
        printf("The pattern was not found with strstr.\n");

    scanf("%s", pat);

    if(char *t = strstr(str, pat))
        printf("The string returned by strstr is: %s\n", t);

    else
        printf("The pattern was not found with strstr.\n");

    return 0;
}
