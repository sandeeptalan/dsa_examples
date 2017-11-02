#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "common.h"
#include "node.h"

void run_linked_list();
NODE* create_list();
void addNewNodeInEnd(NODE* head);
void print_list(NODE* head);

void reverse_list(NODE* head);

#endif