#include<stdio.h>
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LNode,LinkList;
//假设有n个元素已经存储数组A中，用尾插法建立链表C。 
void insertList(LNode *&C,int A[],int n)
{
	LNode *r,*s;
	int i;
	LNode *C=(LNode*)malloc(sizeof(LNode));
	C->next=NULL;
	r=C;
	for(i=0;i<n;++i)
	{
		s=(LNode*)malloc(sizeof(LNode));
		r->next=s;
		s->data=A[i];
	    r=r->next;	
	}
	r->next=NULL;	
}


//头插法 
void insertList(LNode *&C,int A[],int n)
{
	LNode *r;
	int i;
	C=(LNode*)malloc(sizeof(LNode));
	C->next=NULL;
	for(i=0;i<n,++i)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=A[i];
		s->next=C->next;
		C->next=s;  //s是新结点 
	}
}
