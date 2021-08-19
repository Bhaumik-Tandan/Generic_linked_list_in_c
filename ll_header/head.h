void* head(node** h)
{
    #include "disp_route.h"
    return disp_r(*h,0);
}

void* tail(node **h)
{
    #include "get.h"
   #include "disp_route.h"
    return disp_r(get(*h,-1),1);
}

void* dispe(node **h,short p)
{
    #include "get.h"
   #include "disp_route.h"
    return disp_r(get(*h,p),2);
}