#include<stdio.h>
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LNode,LinkList;
//������n��Ԫ���Ѿ��洢����A�У���β�巨��������C�� 
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


//ͷ�巨 
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
		C->next=s;  //s���½�� 
	}
}
