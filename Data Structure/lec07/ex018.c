#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10    // maximum stack size
#define INVALID_KEY -1

typedef struct {
    int key;
} element;
element stack[MAX_STACK_SIZE];
int top = -1;

void push(element);
element pop();
void stackFull();
element stackEmpty();
void printStack();

int main(){
    element e;
    for (int i=0;i<5;i++){
        e.key = i; push(e);
        printf("key %d inserted into the stack.\n", e.key);
    }

    for (int i=0;i<6;i++) {
        e = pop();
        printf("key %d deleted from the stack.\n", e.key);
    }
    return 0;
}

void push(element item){
    if(top>=MAX_STACK_SIZE-1) stackFull();
    stack[++top] = item;
}

element pop() {
    /* return the top element from the stack */
    if(top == -1)
        return stackEmpty();  /* error handler */
    return stack[top--];
}

void stackFull() {
    fprintf(stderr, "stack is full, cannot add element.\n");
    exit(EXIT_FAILURE);
}

element stackEmpty() {
    element e;
    e.key = INVALID_KEY;
    fprintf(stderr, "STACK IS EMPTY!\n");
    return e;
}

