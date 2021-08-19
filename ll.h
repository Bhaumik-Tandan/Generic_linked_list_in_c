#include<stdio.h>
#include "./ll_header/ins_e_.h"
#include "./ll_header/del.h"
#include "./ll_header/len.h"
#include "./ll_header/disp.h"
#include "./ll_header/head.h"

void l_in(node **h)
{
    *h=0;
}
void menu(node **h)
{
    #include "./ll_header/menu_fun.h"
    void (*f[4])(node **);
    printf("\n\n1)Insert\n2)Display\n3)Delete\n4)Lenght\n5)Exit\n");
    printf("Enter your choice: ");
    short c;
    scanf("%d",&c);
    f[0]=mins;
    f[1]=mdes;
    f[2]=mdel;
    f[3]=mlen;
    if(c==5)
    return;
    f[c-1](h);
}

