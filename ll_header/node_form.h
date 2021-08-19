node* node_form(void *a,short d)//to form the node
{
    node *t=malloc(sizeof(node));
    t->dt=d;
    t->d=a;
    return t;    
}

