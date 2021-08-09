/*
	Notes : 
		* it is not a fixed size;
		* Linked is consist of two parts 
			Data;
			next;
		* Deletion and inserition is Easy compared to array;
		* Random access is not posssible;
		* and it needs extra space;

		* The first node is called as HEAD;
		* last node is called TAIL;
		* If the list is empty the HEAD is pointing to the NULL;
*/

#include <iostream>
using namespace std;

// creating the node;
class Node {
	public : 
		int data;
		Node * next;
};

void print_data(Node *n) {
	if(n == NULL) {
		cout << "List is empty add some data to print" << endl;
		return;
	}
	while(n != NULL){
		if(n -> next != NULL) 
			cout << n -> data << " -> ";
		else
			cout << n -> data << endl; 
		n = n -> next;
	}
}

void push( Node ** list, int data ) {

	Node * new_node = new Node;

	new_node -> data = data;

	new_node -> next = *list;

	*list = new_node;
}


// void moveLastElemtntToFront( Node ** node ) {

// }

int main() {

	// Initally head is pointing to the ( NULL );
	Node* head = NULL;

	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	print_data(head);

	return 0;
}
