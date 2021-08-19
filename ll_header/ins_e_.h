#include "node.h"
void ins(node **h,void *a,short p)
{
    #include "ins.h"
    in(h,a,p,2);
}
void ini(node **h,void *a,short p)
{
    #include "ins.h"
    in(h,a,p,0);
}
void inc(node **h,void *a,short p)
{
    #include "ins.h"
    in(h,a,p,3);
}
void inf(node **h,float a,short p)
{
    #include "ins.h"
    float *f=malloc(sizeof(float));
    *f=a;
    in(h,f,p,1);
}
#define ins(h,a,p) _Generic(a,int: ini, double: inf,char: inc,float: inf,char*: ins)(h,a,p)