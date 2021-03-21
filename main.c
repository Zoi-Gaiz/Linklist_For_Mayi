#include <stdio.h>
#include <accctrl.h>


typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *Linklist;


void CreateList(Linklist L, int n) {
    Linklist head = L;
    for (int i = 1; i <= n; i++) {
        Linklist p;
        p = (Linklist) malloc(sizeof(LNode));
        scanf("%d", &p->data);
        p->next = head->next;
        head->next = p;
    }
}

void DisplayList(Linklist L) {
    Linklist p;
    p = L->next;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}

void InsertList(Linklist L , int i ,int data)
{
    Linklist p;
    int j=0;
    p = L;
    while (p && (j<i-1))
    {
        p = p->next;
    }
    if(!p || j > i-1)
    {

    }


}

int main() {
    Linklist a = (Linklist)malloc(sizeof(Linklist));
    a->next = NULL;
    CreateList(a, 5);
    DisplayList(a);
    return 0;
}
/*
1
22
333
4444
55555
*/