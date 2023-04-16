#include<iostream>
using namespace std;

class linkedList{
    public:
        int data;
        linkedList * next;

};

void printList(linkedList *n){
    while(n!=NULL){
        cout<< n->data<<endl;
        n = n->next;
    }
}


// Driver Code 

int main()
{
    linkedList * head = NULL;
    linkedList * second = NULL;
    linkedList * third = NULL;

    head = new linkedList();
    second = new linkedList();
    third = new linkedList();

    head -> data = 1;
    head -> next = second;

    second -> data = 45;
    second -> next = third;

    third -> data = 67;
    third -> next = NULL;

    // function call

    printList(head);



    return 0;
}