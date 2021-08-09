#include <iostream>

/*
	ALGORITHM : 

		* function takes the LIST as a argument;
		* use the unordered set to store the visited node address;
		* loop through the LIST until node is NULL; ( condition NODE !- NULL  );
		* if the node is present on the list and return true;
		* else put the address of the Node into the set;
		* LIST = LIST -> NEXT;
		* if not found return false;
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

// Using the FLOYD's ALGORITHM : ( Without extra space )
/*
	ALGORITHM :

		* make two reference varibles for he list 
		* like slow anf fast
		* increment slow by one like slow -> next;
		* incremnt fast by two like fast -> next -> next;
		* if the loop is exists slow and meet at any point of time;
		* or else thrir is no loop in the list;

			while( slow && fast && fast -> next ) {
				slow = slow -> next;
				fast = fast -> mext -> next;

				if( slow == fast ) return true;
			}
*/

// Find the length of a LOOP
/*
	ALGORITHM :		
		* function takes List as a argument;
		* Make a variable called length and sert to 0;
		* Make two new reference variables called slow and the fast;
		* loop the list using the reference Condition( slow && fast && fast->next )
		* increment the slow by one and fast by two;
		* if slow and fast are meeting in same pointer their is an loop is present;
			* make an temp variable to store the slow pointer;
			* loop over the temp list until the temp and slow are not equal each other;
			* inside the loop increment the length by 1;
			* end of the loop return the length ( otherwise the it goes infinite loop );
		* else return the length;

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