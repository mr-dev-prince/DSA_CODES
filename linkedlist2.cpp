#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
};

// function to print the nodes
void print(Node *n)
{
    while (n != NULL)
    {
        cout << n->val << endl;
        n = n->next;
    }
}

int main()
{
    // creating nodes
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;

    //initiating the nodes

    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    // setting values of the node and pointing the pointer to the next node;

    head->val = 36;
    head->next = second;

    second->val = 57;
    second->next = third;

    third->val = 76;
    third->next = fourth;

    fourth->val = 87;
    fourth->next = NULL;

    print(head);

    return 0;
}