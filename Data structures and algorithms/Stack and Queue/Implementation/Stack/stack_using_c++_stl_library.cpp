/*
	* implementation of stack using the c++ stl library;
	* LIFO -> Last In First Out concepts;
*/

#include <iostream>
#include <stack>
using namespace std;

void printStack( stack <int> s ) {
	cout << "Print the stack element" << endl;

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	
	cout << endl;
}

int main() {
	
	stack <int> stk; // initializing the stack;
	stack <int> stk2; // initializing the stack2;

	// it pushes the element in the stack
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	stk.push(50);

	stk2.push(60);
	stk2.push(70);
	stk2.push(80);
	stk2.push(90);
	stk2.push(100);

	// it will pops out the last added element in the stack element is deleted; O(1)
	// cout << "Poped element : " << stk.pop() << endl;
	stk.pop();

	// it will returns the last element of the stack not delete the element; O(1)
	// cout << "Top element of an stack : " << stk.top() << endl;
	stk.top();

	// it returns the TRUE, FALSE if the stack is empty it returns true; otherwise false; O(1)
	// cout << "is stack is empty : " << stk.empty() << endl;
	stk.empty();

	// it returns the size of an stack; O(1)
	// cout << "Size of an stack is : " << stk.size() << endl;
	stk.size();

	cout << "Before swaping the element : " << endl << endl;
	printStack(stk);
	printStack(stk2);
	
	// it will hepls to swap two stack 
	stk.swap(stk2);

	cout << "After swaping the stack" << endl << endl;
	printStack(stk);
	printStack(stk2);

}