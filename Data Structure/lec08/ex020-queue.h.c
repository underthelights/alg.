#include <algorithm>
#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define MAX_QUEUE_SIZE 100   /* maximum queue size */
#define INVALID_KEY -1
typedef struct {
    int key;
    /* other fields */
} element;
element queue[MAX_QUEUE_SIZE];
int rear = -1;
int front = -1;

void addq(element);
element deleteq();
void queueFull();
element queueEmpty();

int main() {
    O;
    int i;
    element e;

    for(i = 0; i < 8; i++) {
        e.key = i;
        addq(e);
        printf("key %2d inserted into the queue. (front: %2d rear: %2d)\n", e.key, front, rear);
    }

    for(i = 0; i < 8; i++) {
        e = deleteq();
        printf("key %2d  deleted from the queue. (front: %2d rear: %2d)\n", e.key, front, rear);
    }


    for(i = 8; i < 16; i++) {
        e.key = i;
        addq(e);
        printf("key %2d inserted into the queue. (front: %2d rear: %2d)\n", e.key, front, rear);
    }

    for(i = 8; i < 16; i++) {
        e = deleteq();
        printf("key %2d  deleted from the queue. (front: %2d rear: %2d)\n", e.key, front, rear);
    }
    return 0;
}

void addq(element x){
    if(rear == MAX_QUEUE_SIZE-1) queueFull();
    queue[rear++] = x;
}
element deleteq(){
    if(rear == front) queueEmpty();
    return queue[front++];
}
void queueFull(){
    int off;
    if(front == -1){
        fprintf(stderr, "no more space in the queue\n");
        exit(1);
    }
    off = front +1;
    for(int i = front+1; i<MAX_QUEUE_SIZE;i++)
        queue[i-off] = queue[i];

    front = front - off;
    rear = rear - off;
    printf(" ==== queue reorganized. (front: %2d rear: %2d) ====\n", front, rear);
}
element queueEmpty(){
    element e;
    e.key = INVALID_KEY;
    return e;
}
