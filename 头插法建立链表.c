Linklist List_listinsert(Linklist &L)
{
    LNode *S;
    int x;
    L=(Linklist)malloc(sizeof(LNode));
    L->next=NULL;
    scanf("%d",&x);
    while(x!=9999)
    {
        S=(Lnode*)malloc(sizeof(LNode));
        S->data=x;
        S->next=L->next;
        L->next=S;
        scanf("%d",&x);
    }
    return L;
}