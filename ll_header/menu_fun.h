void mins(node **h)
{
    printf("\n\nEnter the position you want to insert(-1 for last element and 0 for head): ");
    int c;
    scanf("%d",&c);
    printf("\nEnter the element to be inserted: ");
    char s[21];
    scanf("%s",s);
    int a=atoi(s);//convert string to int
    float f=atof(s);
    if((a!=0 || strcmp("0",s)==0)&& f==a)
    {
        ins(h,a,c);
        return menu(h);
    }
        if(f!=0)
        {
            ins(h,f,c);
            return menu(h);
        }
        if(strlen(s)>1){
        ins(h,s,c);
        }
        else
        ins(h,s[0],c);
        return menu(h);
    }    

void mdel(node **h)
{
    printf("\nEnter the position you want to delete(-1 for last element): ");
    int c;
    scanf("%d",&c);
    del(h,c);
    return menu(h);
}
void mlen(node **h)
{
    printf("\nLenght of the linked list is %d",len(h));
    return menu(h);
}
void mdes(node **h)
{
    #include "custom_entry.h"
    printf("\n1)Head\n2)Tail\n3)Whole\n4)Custom\nEnter Display choice: ");
    short c;
    scanf("%d",&c);
    void (*f[3])(node **);
    f[0]=head;
    f[1]=tail;
    f[2]=disp;
    if(c<4)
    f[c-1](h);
    else
    dispe(h,loc());
    return menu(h);
}