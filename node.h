#ifndef NODE_H
#define NODE_H

#include "common.h"
typedef struct node NODE;

struct node{
    int node_data;
    struct node *next;
};

struct nodelist{
    NODE* nodelisthead;
};

NODE* createNode(int node_data);

#endif