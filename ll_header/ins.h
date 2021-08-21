void in(node **h,void *a,short d,short n)//-1 or any element greater than list len, for end 0 for head, and others for postion
{
    #include "node_form.h"
    #include "get.h"
     void (*f[4])(void *);
     #include "disp_in.h"
    f[0]=dispi__19BIT0292;
    f[1]=dispf__19BIT0292;
    f[2]=disps__19BIT0292;
    f[3]=dispc__19BIT0292;
    printf("\n");
    if(!*h || d==0)
    {
        node* t=*h;
        *h=node_form(a,n);
        (*h)->n=t;
        f[(*h)->dt]((*h)->d);  
        printf(" inserted");
        return;
    }
    node *p=get(*h,d),*t=node_form(a,n); 
    t->n=p->n;
    p->n=t;
    f[t->dt](t->d);  
    printf(" inserted");
}