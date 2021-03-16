#include<stdio.h>
typedef struct LNode
{
	 data;
	struct LNode *next;
}LNode,*LinkList;
_Bool insertlist(LinkList &L,int i,ElemType e)   //��i��λ�ò���e 
{
	if(i<1)
	return false;
	LNode *P;
	P=L;
	int j=0;   //��ǰPָ��ĵڼ������ 
	while(P!=NULL && j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	return false;
	LNode *S=(LNode*)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;
	p->next=s;
	free(S);
	return true;
}
