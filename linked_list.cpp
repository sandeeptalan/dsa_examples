#include "common.h"
#include "node.h"
#include "linked_list.h"

using namespace std;

/* Linked list head */
NODE* head;

void run_linked_list()
{
    head = create_list();
    cout << "List created :- " << endl ; 
    print_list(head);
    cout << endl;
}

NODE* create_list()
{
    int data;
    char _continue;
    cout << "Creating list:-" << endl;
    cout << "Enter head element data -" << endl;
    cin >> data;
    head = createNode(data);
    cout << "Add more nodes ? type 'y' || 'Y' to continue" << endl;
    cin >> _continue;

    while(_continue == 'y' || _continue == 'Y')
    {
        addNewNodeInEnd(head);
        cout << "Add another ? type 'y' || 'Y' to continue" << endl;
        cin >> _continue;
    }
    return head;
}

void addNewNodeInEnd(NODE* head)
{
    int node_data;
    NODE* tmp_node = head;

    if(head == NULL)
    {
        cout << "Error !!!, Empty list, first create a list" << endl;
        return;
    }
    if(tmp_node->next == NULL)
    {
        cout << "Only Node in list" << endl;
    }
    else
    {
        cout << "Traversing till end for insertion" << endl;
        while(tmp_node->next != NULL)
        {
            tmp_node = tmp_node->next;
        }
    }
    cout << "New node data -" << endl;
    cin >> node_data;
    tmp_node->next = createNode(node_data);
}

void print_list(NODE* head)
{
    NODE* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->node_data << " " ;
        tmp = tmp->next;
    }
}

void reverse_list(NODE* head)
{
    NODE* p = head;
    NODE* q;
    if(p->next == NULL)
    {
        head = p;
        return;
    }
    reverse_list(p->next);
    q = p->next;
    q->next = p;
    p->next = NULL;
}