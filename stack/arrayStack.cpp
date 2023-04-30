#include<iostream>
using namespace std;
#define max 1000
class stack{
    int top ;

    public:

    int a[max];

    stack(){top = -1;};

    bool push(int x);
    int pop();
    int peek();
    int size();
    bool isEmpty();

};

bool stack:: push(int x){
    if(top>= (max -1)){
        cout<<"Stack full";
        return false;
    }
    top++;
    a[top]=x;
}

int stack:: pop(){
    if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		cout<<x<<" Popped\n";
	}
}

int stack :: peek(){
    return a[top];
}

bool stack :: isEmpty(){
    return (top == -1);
}

int stack :: size(){
    return top+1;
}

int main()
{

    class stack s;
    for(int i=1; i<=5; i++){
        s.push(i);
    }

    cout<< "The last element pushed is "<<s.peek()<<'\n';

    cout<<"0=false / 1=true : "<< s.isEmpty() <<"\n";

    cout<<"Size of the Stack is " <<s.size()<<'\n';

    while(!s.isEmpty()){
        s.pop();
    }

    cout<<"Size of the Stack is " <<s.size()<<'\n';
    cout<<"0=false/ 1=true : "<< s.isEmpty() <<"\n";

    
    return 0;
}