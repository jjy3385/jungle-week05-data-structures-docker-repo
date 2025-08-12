#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};


int main() {

    struct Node a;
    struct Node *p = &a;


    // &p->next = &(p->next)
    printf("%p\n", (void*)&p->next);
    printf("%p\n", (void*)&(p->next)); 


    int num = 10;
    int *ptr;
    ptr = num;



    return 0;
}
