#include<stdio.h>
typedef struct LNode
{
	int data;
	struct Node *next;
}LNode;

int merge(LNode *A,LNode *B,LNode *&C)
{
    LNode *p=A->next;
    LNode *q=B->next;
    LNode *r;
    C=A;
    C->next=NULL;
    free(B);
    r=C;
    while(p!=NULL && q!=NULL)
    {
        if(p->data<=q->data)
        {
            r->next=p;
            p=p->next;
            r=r->next;
        }
        else 
            {
            r->next=q;
            q=q->next;
            r=r->next;
            }
        r->next=NULL;
        if(p!=NULL) r->next=p;
        if(q!=NULL) r->next=q;
    }    
}
