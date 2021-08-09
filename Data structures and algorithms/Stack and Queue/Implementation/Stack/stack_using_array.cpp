/*
	* stack is lenear data structure;
	* which will allows to store and access the data in oarticuler order like LIFO,FIFO
	* LIFO => Last In First Out;
	* FIFO => First In First Out;
	* insertion and deletion is happen in same position;
*/

/*
	* operation on stack 
	* PUSH => it helps to push the element into the stack, if the stack is full returns the overflow error;
	* POP => it pops the element from the stack;
	* PEEK / TOP => it returns the top element of the stack;
	* isEmpty => returns true or false if stack is empty returns true otherwise false;

	* these all operation are takes only O(1) time;
*/

#include <iostream>
using namespace std;
#define MAX 10

class Stack {

	public : 
		
		int top;

		int stack[MAX];
		
		Stack() {
			top = -1;
		}

		bool push(int value);
		int pop();
		int peek();
		bool isEmpty();
};

bool Stack::push(int value) {
	if( top >= (MAX - 1) ) {
		cout << "Stack is overflow" <<endl;
		return false;
	}
	stack[++top] = value;
	cout << "Successfully pushed into the stack" <<endl;
	return true;
}

int Stack::pop() {
	if(top < 0) {
		cout << "Stack is underflow"<<endl;
		return false;
	}
	int element = stack[top--];
	return element;
}

int Stack::peek() {
	if(top < 0) {
		cout << "Stack is undeflow"<<endl;
		return false;
	}
	return stack[top];
}

bool Stack::isEmpty(){
	return (top < 0);
}

void printStack(int s[],int top) {
	for(int i = 0; i <= top; i++) {
		cout << s[i] << endl;
	}
}

int main() {
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	s.pop();
	cout << s.peek() << endl;
	cout << s.isEmpty() << endl;

	printStack(s.stack,s.top);
}
