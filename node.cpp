#include "node.h"

NODE* createNode(int node_data){
    NODE* newNode = (NODE*) malloc (sizeof(NODE));
    newNode->node_data = node_data;
    newNode->next = NULL;
    return newNode;
}
