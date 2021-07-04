//============================================================================//
// ex016: finding a pattern inside a string                                   //
//============================================================================//
// brute-force method
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nfind(char*, char*);

int main() {

    char pat[] = "wor";
    char str[] = "hello world I am a student.";
    int rv;

    rv = nfind(str, pat);
    if(rv == -1) {
        printf("The pattern <%s>  was not found in the string.\n", pat);
    } else {
        printf("The pattern <%s> was found at position %d in the string.\n", pat, rv);
    }
    return 0;
}

int nfind(char *string, char *pat) {
    int j, start=0;
    int laststr = strlen(string)-1, lastpat = strlen(pat)-1;
    int endmatch = lastpat;

    for(int i=0;endmatch <= laststr; endmatch++, start++){
        if(string[endmatch] == pat[lastpat])
            for(j = 0, i = start; j < lastpat && string[i] == pat[j]; i++, j++);
        if(j == lastpat) return start;
    }
    return -1;
}


