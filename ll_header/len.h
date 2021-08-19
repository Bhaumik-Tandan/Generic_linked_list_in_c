int len(node **h)
{
    if(*h==0)
    return 0;
    node *p=*h;
    int i=1;
    while(p->n){
    p=p->n;i++;}
    return i;   
}