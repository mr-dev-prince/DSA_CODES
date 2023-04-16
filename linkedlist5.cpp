#include<iostream>
using namespace std;

class linkedList{
    public:
        int data ;
        linkedList * nextNode;
};

void printList(linkedList * n)
{
    while(n!=NULL){
        cout << n->data << endl;
        n = n->nextNode;
    }
};


int main()
{

    linkedList * head = NULL;
    linkedList * first = NULL;
    linkedList * second = NULL;
    linkedList * third = NULL;

    head = new linkedList;
    first = new linkedList;
    second = new linkedList;
    third = new linkedList;

    head -> data = 45;
    head -> nextNode = first;

    first -> data = 46;
    first -> nextNode = second;

    second -> data = 47;
    second -> nextNode = third;

    third -> data = 48;
    third -> nextNode = NULL;

    printList(head);

    return 0;
}

// Image viewer – Previous and next images are linked and can be accessed by the next and previous buttons.

// Previous and next page in a web browser – We can access the previous and next URL searched in a web browser by pressing the back and next buttons since they are linked as a linked list.

// Music Player – Songs in the music player are linked to the previous and next songs. So you can play songs either from starting or ending of the list.

// GPS navigation systems- Linked lists can be used to store and manage a list of locations and routes, allowing users to easily navigate to their desired destination.

// Robotics- Linked lists can be used to implement control systems for robots, allowing them to navigate and interact with their environment.

// Task Scheduling- Operating systems use linked lists to manage task scheduling, where each process waiting to be executed is represented as a node in the list.

// Image Processing- Linked lists can be used to represent images, where each pixel is represented as a node in the list.

// File Systems- File systems use linked lists to represent the hierarchical structure of directories, where each directory or file is represented as a node in the list.

// Symbol Table- Compilers use linked lists to build a symbol table, which is a data structure that stores information about identifiers used in a program.

// Undo/Redo Functionality- Many software applications implement undo/redo functionality using linked lists, where each action that can be undone is represented as a node in a doubly linked list.

// Speech Recognition-  Speech recognition software uses linked lists to represent the possible phonetic pronunciations of a word, where each possible pronunciation is represented as a node in the list.

// Polynomial Representation- Polynomials can be represented using linked lists, where each term in the polynomial is represented as a node in the list.

// Simulation of Physical Systems-  Linked lists can be used to simulate physical systems, where each element in the list represents a discrete point in time and the state of the system at that time.