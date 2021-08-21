node *get(node *h,short n)
{
    node *p=h;
    short i=1;
    while(p->n && n!=i++)//in case of -1 it will get excute uptil end
    p=p->n;
    return p;    
}