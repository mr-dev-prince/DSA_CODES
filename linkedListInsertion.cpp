#include <iostream>
using namespace std;

class nodeList
{
public:
    int data;
    nodeList *nextNode;
};

void insertAtFront(nodeList **head_ref, int new_data)
{

    nodeList *new_node = new nodeList; // allocating the node

    new_node->data = new_data; // define value for the new node

    new_node->nextNode = (*head_ref); // pointing the pointer of the new node to the head of the front node

    (*head_ref) = new_node; // making the new node the head node
}

void print(nodeList *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->nextNode;
    }
}

int main()
{

    nodeList *head = NULL;
    nodeList *first = NULL;
    nodeList *second = NULL;
    nodeList *third = NULL;

    head = new nodeList;
    first = new nodeList;
    second = new nodeList;
    third = new nodeList;

    head->data = 90;
    head->nextNode = first;

    first->data = 80;
    first->nextNode = second;

    second->data = 70;
    second->nextNode = third;

    third->data = 60;
    third->nextNode = NULL;

    print(head);
    cout<< "after insertion" << endl;

    insertAtFront(&head , 50);

    print(head);

    return 0;
}