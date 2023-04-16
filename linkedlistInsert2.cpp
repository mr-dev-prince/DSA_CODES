
#include<iostream>
#include <time.h>
using namespace std;

// initialising the node as it is user defined data and not usual data
// a node contains a data and pointer to the next node. if there isn't a next node the pointer is automatically pointed to NULL;

class Node{
    public:
    int data;
    Node * nextNode;
};

void insertAtFront(Node **head , int new_data){
    
    // initiating a new node

    Node * new_node = new Node;

    // giving value to the new node

    new_node -> data = new_data;

    // pointing the pointer of the new node to the head of the node

    new_node -> nextNode = (*head);

    // making the new node the head node

    (*head) = new_node;
}

// Print function to print the LinkedList

void printList(Node * pointer){
    while(pointer!= NULL){
        cout<< pointer -> data << endl;
        pointer = pointer -> nextNode;
    }
}

// Driver Code

int main()
{
    srand(time(0)); // generating random numbers against time
    // creating multiple nodes using the insertion function

    Node * head = NULL;

    // using for loop to create a Linked list of 10 nodes. we can alternately run the insertAtFront funtion to create the required node instead of using for loop

    for( int i = 0 ; i<10 ; i++){
        int x = (rand()%6)+8; // passing the random number as the node data 
        insertAtFront(&head , x);
    }

    // using print funtion to print the linkedlist

    printList(head);
    
    return 0;
}