void in(node **h,void *a,short d,short n)//-1 or any element greater than list len, for end 0 for head, and others for postion
{
    #include "node_form.h"
    #include "get.h"
    if(!*h || d==0)
    {
        node* t=*h;
        *h=node_form(a,n);
        (*h)->n=t;
        return;
    }
    node *p=get(*h,d),*t=node_form(a,n); 
    t->n=p->n;
    p->n=t;
}