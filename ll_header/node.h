#pragma once
typedef struct node
{
    short dt;//denote the datatype
    void* d;//stores the data
    struct  node *n;//stores the next node address
};
typedef struct node node;//only have to reffer as node