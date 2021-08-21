void del(node **h,short p)// list starts from 1
{
    #include "get.h"
    #include "disp_in.h"
    printf("\n");
     void (*f[4])(void *);
    f[0]=dispi__19BIT0292;
    f[1]=dispf__19BIT0292;
    f[2]=disps__19BIT0292;
    f[3]=dispc__19BIT0292;
    node *t;
    if((*h)->n==0 || p==0 || p==1)
    {
        f[(*h)->dt]((*h)->d);
        printf(" deleted");
        (*h)=(*h)->n;
        return;
    }
    int l=len(h);
    if(p==-1 || l<=p)
    {
        t=get(*h,l-1);
    }
    else
    {
        t=get(*h,p-1);
    }
    f[t->n->dt](t->n->d);  
    printf(" deleted");
    t->n=t->n->n;
}