#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
};

void printlist(node * n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}





int main()
{
    node * head = NULL;
    node * first = NULL;
    node * second = NULL;
    node * third = NULL;

    head = new node;
    first = new node;
    second = new node;
    third = new node;


    head -> data = 67;
    second -> data = 45;
    third -> data = 987;
    first -> data = 90;

    head -> next = first;
    first -> next = second;
    second -> next = third;
    third -> next = NULL;


    printlist(head);


    return 0;
}