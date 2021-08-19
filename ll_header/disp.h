void* disp(node **h)
{
    #include "display_function.h"
    printf("\nThe whole linked list is\n\n");
     char s[23];
     s[0]='#';
    for(int i=1;i<23;i++)
    s[i]='#';
    printf("%11s\n","_");//prints initital ground
    printf("%12s\n","___");
    printf("%13s\n","_____");
    node *p=*h;
    void (*f[4])(void *);
    f[0]=dispi__19BIT0292_pad;
    f[1]=dispf__19BIT0292_pad;
    f[2]=disps__19BIT0292_pad;
    f[3]=dispc__19BIT0292_pad;
    while(p)
    {
        printf("%11s\n","|");//for printing arrow
        printf("%11s","v");
        printf("\n%s\n",s);
        f[p->dt](p->d);
        printf("%s\n",s);
        p=p->n;
    }
    
}