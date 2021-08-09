/*
	* stack using the Linked List;
*/

#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node * next;
};

int isEmpty(Node* node) 
{ 
    return !node; 
}

void push(Node **node,int data) {

	Node * newNode = new Node;

	newNode -> data = data;
	
	newNode -> next = *node;

	*node = newNode;

	cout << "Successfully Pushed into the stack" << endl;
}

int pop(Node ** node) {

	if(isEmpty(*node)) return -1;

	Node * temp = *node;

	*node = (*node) -> next;

	int element = temp -> data;

	free(temp);

	return element;
}

int peek(Node * node) {
	if(isEmpty(node)) return -1;

	return node -> data;
}

void printData(Node * node) {
	cout << "Data's are : ";
	while( node ) {
		if(node -> next) {
			cout << node -> data << " -> ";	
		} else {
			cout << node -> data;	
		}
		node = node -> next;
	}
}

int main() {
	Node * head = NULL;

	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);

	cout << endl << "Popped Element : " <<pop(&head) <<endl;

	cout << endl << "Top Element is : " <<peek(head) <<endl << endl;

	printData(head);
}