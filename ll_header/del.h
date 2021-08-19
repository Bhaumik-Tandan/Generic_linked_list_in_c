void del(node **h,short p)// list starts from 1
{
    #include "get.h"
    if((*h)->n==0 || p==1){
    *h=(*h)->n;
    return;
    }
    node *t;
    int l=len(h);
    if(p==-1 || l<=p)
    {
        t=get(*h,l-1);
    }
    else
    {
        t=get(*h,p-1);
    }
    t->n=t->n->n;
}