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
    #include "disp_in.h"
    printf("\n");
     void (*f[4])(void *);
    f[0]=dispi__19BIT0292;
    f[1]=dispf__19BIT0292;
    f[2]=disps__19BIT0292;
    f[3]=dispc__19BIT0292;
    f[t->n->dt](t->n->d);  
    printf(" deleted");
    t->n=t->n->n;
}