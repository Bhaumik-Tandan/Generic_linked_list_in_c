#include<stdio.h>
#include "./ll_header/ins_e_.h"
#include "./ll_header/del.h"
#include "./ll_header/len.h"
#include "./ll_header/disp.h"
#include "./ll_header/head.h"
void menu(node **h)
{
    #include "./ll_header/menu_fun.h"
}
main()
{
    node *h=0;
    ins(&h,23,0);
    ins(&h,(char)'d',0);
    ins(&h,"sd",0); 
    ins(&h,34.34,-1); 
    disp(&h);
    dispe(&h,2);
}