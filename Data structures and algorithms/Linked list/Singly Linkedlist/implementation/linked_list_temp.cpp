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
#include <unordered_set>
#include <stack>
#include <unordered_set>
#include <map>
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

/*
	* push function is used to insert the data in the begining of the list;

	* this function takes four steps to insert the data;

	* function takes two arguments ( Pointer to Pointer for HEAD , and DATA )
	
	* STEPS : 

		* 1 . allocate new node;

		* 2 . put the data into the node;

		* 3 . make a next of new_node as head;

		* 4 . move the head to point to the new node;

	* it takes O(1) time to insert the data;
*/

void push( Node** head_ref, int data ) {
	
	// Allocate new node;
	Node * new_node = new Node();

	// put the data into new_node;
	new_node->data = data;

	// make a next of new_node as head;
	new_node->next = *head_ref;

	// move the next point to the new node;
	*head_ref = new_node;
}

void insertAfter( Node* head_ref, int data, int position , Node** node ) {
	
	// Let's make an index variable to point out the index position of the nodes
	int index = 1;

	// initially check if the node is NULL or not if it is NULL return; else continue the operation
	if(head_ref == NULL) {
		cout << "The node cannot be NULL";
		return;
	}

	// Loop through the List until we get the position;
	while( index < position ){
		index++;
		head_ref = head_ref -> next;
	}

	// Mak an new node for insert new data;
	Node * new_node = new Node();
	
	// Set the data to the new node
	new_node->data = data;

	// check if the index is 0 or not if it is 0 insert at the beginning of the List;
	if( position > 0 ) {
		// make an new node's next pointer to Heads next; 	
		new_node->next = head_ref->next;
		
		// And Heads next will became a new node;
		head_ref->next = new_node;

	} else {

		// make a new node next to node;
		new_node->next = *node;
		
		// Now node will became new node;
		*node = new_node;
	}
}

void insertEnd( Node** head_ref, int data ) {
	// make an new node;
	Node* new_node = new Node();

	// set te data to the new node;
	new_node -> data = data;

	// and set the new node's next to NULL;
	new_node -> next = NULL;

	// make an referece variable for the HEAD to iterate the HEAD;
	Node * node = *head_ref;

	// if the head is NULL assign the new node to HEAD and return; 
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;	
	}

	// find the before last node;
	while( node -> next != NULL ) {
		node = node -> next;
	}

	// make a node -> next to new node;
	node -> next = new_node;
	return;
}

// delete node by usjing the value;
void deleteNode( int data, Node ** node) {
	
	// Make a node acceccable
	Node *list = *node;

	// check if the list is empty if it is true return;
	if( list == NULL  ) {
		cout << "List is empty item cannot be removed" <<endl;
		return;
	}

	// Edge case 2 if the element is present at the begining of the list;
	if( list != NULL && list -> data == data ) {
		*node = list -> next;
		cout << "Successfully Deleted" <<endl;
		return;
	}

	// Try to find the item in the list; ( it is not sorted so binary search is not work here )
	while( list != NULL ){
		// if i found the item i just break the loop otherwise iterete the loop
		if( list -> next != NULL && list -> next -> data == data){
			break;
		} else {
			list = list -> next;
		}
	}

	// if the list is NULL after the itreation so item cannot be found;
	if(list == NULL) {
		cout << "Data not found" <<endl;
	} else {
		// lets make a list -> next = list -> next -> next;
		// And print the success message;
		// we have to free the memory;
		list -> next = list -> next -> next;
		cout << "Successfully Deleted" <<endl;
	}
}

// delete node by using the position
void deleteNodeByUsingPosition( Node** node, int position ){
	
	// check if the given position is greater then 0 if continue otherwise return;
	// and same for node if the node is NULL return;
	if( *node == NULL || position < 0 ){
		cout << "Node cannot be deleted" << endl;
		return;
	}

	// initialize the index and set to be 0;
	// by using the For loop to avoid index variable;
	int index = 0;
	Node *list = *node;

	// Edge case if the element postion is 0 we simply remove the next pointer and set Node to Null
	if( list != NULL && position == 0 ) {
		*node = list -> next;
		cout << "Successfully Deleted" << endl;
		return;
	}

	// By using the while loop to find out the index that matches to position that are givcen by the user
	while( list != NULL && index < (position - 1)) {
		list = list -> next;
		index++;
	}

	// if the list is null we cannot find the index in the list that means that index is Greater then length if the list
	// else set the list -> next to list -> next -> next
	if( list == NULL ) {
		cout << "Their is no node present at specified index " << endl;
	} else {
		list -> next = list -> next -> next;
		cout << "Successfully Deleted" << endl;
	}
}

void deleteList( Node ** node ) {
	// initialize the list;
	Node * list = *node;
	
	// set a next pointer to store list's next pointer;
	Node * next;

	// iterate the list and free the memory
	while( list != NULL ) {
		next = list -> next;
		free(list);
		list = next;
	}

	// set the list to NULL
	*node = NULL;
	cout << "List Successfully Deleted " << endl;
}

// find length using iterative way;
/*
	* set the len = 0;
	* loop until the NODE is NULL and Increment the inded value for every iterarion;
	* and return the value;
*/
int length( Node * node ){
	int len = 0;
	while( node != NULL ) {
		len++;
		node = node -> next;
	}
	return len;
}

// using recursion to find the 
/*
	if the node is null return 0
	otherwise return 1 with call a function with node -> next
*/

int length_by_using_recurrsion( Node * node ) {
	if( node == NULL ) return 0;
	else return 1 + length_by_using_recurrsion(node -> next);
}

// to search an element in the list;
bool search( Node * node, int data ) {
	while( node != NULL ){
		if(node -> data == data) {
			return true;
		}
		node = node -> next;
	}
	return false;
}

 /* 
	bool search( Node * node, int data ) {
		if(head == NULL) return false;
		else if( head -> data == data ) return true;
		else search( node -> next, data );
	}
 */

int find_data_using_the_position( Node * node, int position ) {

	if( node == NULL || position < 0 ) return position;

	for( int i = 0; ( node != NULL && i < position ); i++ ) {
		node = node -> next;
	}
	if( node != NULL ) {
		return node -> data;
	} else {
		cout << "Their is no element at the specified index " << endl;
		return -1;
	}
}

/*
	Find the element from end to start :

		* to find the element from the end of the list use the formule;
		* use the TEMP node pointer to store the data and iterate using TEMP node; 
		* length - ( n + 1 );
		* n is the position that we want to reterive the data;
		* first find the length;
		* and make an anathor loop until above condition is satisfying and return the head -> data;
		* enge cases length < n;
		* node == NULL return n;
*/

void middle_of_the_list( Node * node ) {
	
	Node * fast = node;
	Node * slow = node;

	if( node != NULL ) {
		while( fast != NULL && fast -> next != NULL ) {
			slow = slow -> next;
			fast = fast -> next -> next;
		}
	} else {
		return;
	}
	cout << "Middle of the list is :\t" << slow -> data << endl;
	//return slow -> data;
}

/*
	by using the couter to find the middle of the list;
	
	set the counter = 0 and Make a Node reference to the Head ( Node * ref = head ) ;

	and LOOP over the HEAD until the it gets NULL and increment the value of counter;

	if the counter value is Odd increment the node reference to ref = ref -> next;

	if the ref is not equal to null return the value 

	else return -1;

*/

// Detect the LOOP in the Linked list
bool detect_the_loop_in_the_linked_list( Node * node ) {

	unordered_set <Node *> s;
	while( node != NULL ) {
		if(s.find(node) != s.end()){
			cout << "Loop is detected in the list" << endl;
			return true;
		} 
		s.insert(node);
		node = node -> next;
	}
	cout << "Their is no loop in the list" << endl;
	return false;
}

/*
	// using floyds algorithm to find the loop

	// idea is : 

		make two reference varibles for he list 
		like slow anf fast
		increment slow by one like slow -> next;
		incremnt fast by two like fast -> next -> next;
		
		if the loop is exists slow and meet at any point of time;

		or else thrir is no loop in the list 

		while( slow && fast && fast -> next ) {
			slow = slow -> next;
			fast = fast -> mext -> next;

			if( slow == fast ) return true;
		}
*/

int find_length_of_the_loop( Node * node ) {
	
	// set the length = 0;	
	int length = 0;

	// as per the floyd's algorithm we just make a two reference variables like slow and fast
	Node * fast = node;
	Node * slow = node;
	
	// loop over the list 
	while( slow && fast && fast -> next ) {
		
		// increment slow node by one;
		// at the same time increse two in fast pointer
		slow = slow -> next;
		fast = fast -> next -> next;

		// if anypoint slow and the fast meet each other their is an loop in the list;
		if( slow == fast ) {
			// store the slow pointer in the temp;
			Node * temp = slow;
			// Loop until the slow and temp -> next is same;
			while( temp -> next != slow ) {
				// at the same time increase the length + 1;
				length++;
				// initialize the temp to temp -> next;
				temp = temp -> next;
			}
			// once loop is done its execution return the length otherwise it goes infinite loop;
			cout << " length of the loop is :\t" << length + 1 << endl;
			return length + 1;
		}
	}
	cout << "Their is no loop is detected in the linked list" << endl;
	return length;
}

bool find_polyndrome_in_the_linked_list( Node * node ) {

	Node * list = node;

	stack<int> s;

	while( list != NULL ) {
		s.push(list -> data);
		list = list -> next;
	}

	while( node != NULL ){
		int data = s.top();
		
		s.pop();

		if( node -> data != data ){
			return false;
		}

		node = node -> next;
	}

	return true;
}

void remove_dulipcate_from_the_sorted_linked_list( Node ** node ) {
	
	// store the node in refernce variable for accessing the values;
	Node * list = *node;

	// temp node pointer to store the next -> next pointer
	Node * next;

	// if the list is empty return the value;
	if( list == NULL ) {
		cout << "Their is no element in the list" <<endl;
		return;
	}

	// loop the list;
	while( list != NULL && list -> next != NULL ) {
		// check if the list current data with next data
		if( list -> data == list -> next -> data ) {
			// set the next -> next to current next pointer;
			next = list -> next -> next;
			// free the memory;
			free(list -> next);
			// set the list next = next pointer which refers the ( list -> next -> next );
			list -> next = next;
		} else {
			// else set the list = list -> next;
			list = list -> next;
		}
	}
}

void remove_dulipcate_from_the_un_sorted_linked_list( Node ** node ) {
	// make a reference variable for node;
	Node * list = *node;

	// chrkc if the list is null return;
	if( list == NULL ) return ;

	// use the unordered set for storing the original values;
	unordered_set <int> set;

	// make previous pointer and set it to be NULL; 
	Node * previous = NULL;

	// Loop through the list
	while( list != NULL ) {
		
		// store the data in variable for later use only and easy to understand;
		int data = list -> data;
		// Lookup with the set for if the key is exusits or not;
		if( set.find(data) != set.end() ) {
			// make previous node next = list > next;
			previous -> next = list -> next;
			// delete the list;
			delete(list);
		} else {
			// insert the original value into data;
			set.insert( data );
			// make previous = list; ( current node );
			previous = list;
		}
		// stroe the list = previous node next;
		list = previous -> next;
	}
}

int main() {

	// Initally head is pointing to the ( NULL );
	Node* head = NULL;

	push(&head,6);
	push(&head,4);
	push(&head,5);
	push(&head,4);
	push(&head,6);
	push(&head,3);
	push(&head,2);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	// Parameter HEAD, DATA, POSITION to Insert, HEAD with reference for edge cases;
	// insertAfter( head, 5, 0, &head );

	// insert at END of the Linked list;
	// insertEnd( &head, 1 );

	// Delete the node by using the value;
	// deleteNode( 5, &head );
	// deleteNode( 1, &head );
	// deleteNode( 2, &head );
	// deleteNode( 3, &head );
	// deleteNode( 6, &head );
	// deleteNode( 4, &head );

	// Delete the node by using the poistion

	// deleteNodeByUsingPosition(&head , 4);
	// deleteNodeByUsingPosition(&head , 3);
	// deleteNodeByUsingPosition(&head , 2);
	// deleteNodeByUsingPosition(&head , 1);
	// deleteNodeByUsingPosition(&head , 0);

	// Delete the Whole list
	// deleteList(&head);

	// Prints the data;

	// int len = length( head );

	// cout << len << endl;

	// int len_using_recurrsion = length_by_using_recurrsion( head );

	// cout << len_using_recurrsion << endl;

	// middle_of_the_list( head );

	// int value = find_data_using_the_position( head, 3 );
	// cout << value << endl; 

	// head->next->next->next->next = head;

	// detect_the_loop_in_the_linked_list(head);

	// find_length_of_the_loop( head );

	// bool polyndrome = find_polyndrome_in_the_linked_list( head );

	// cout << polyndrome;
	
	cout << "Before Removing the Duplicate element" << endl << endl;
	print_data(head);

	remove_dulipcate_from_the_un_sorted_linked_list( &head );

	cout << endl << "After Removing the Duplicate elements" << endl << endl;
	print_data(head);

	return 0;
}
