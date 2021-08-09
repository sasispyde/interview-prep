#include <iostream>

/*	
	ALGORITHM ( NAIVE SOLUTION ): 
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

// two pointer algorithm;
/*
	ALGORITHM : 
	
		* Function takes LIST as a argument;
		* edge case LIST = NULL return;
		* Make two pointer variables like slow and the fast;
		* loop the LIST until the condition get satisfied ( slow != NULL && fast != NULL && fast->next != NULL );
			*  inside loop increment slow pointer by one and fast paointer to two steps;
		* return the slow -> data which points the middle of the list
*/

// middle of the list using two pointer approch;
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


// find the middle of the list without extra space
/*
	ALGORITHM :
		* by using the couter to find the middle of the list;
	
		* set the counter = 0 and Make a Node reference to the Head ( Node * ref = head ) ;

		* and LOOP over the HEAD until the it gets NULL and increment the value of counter;

		* if the counter value is Odd increment the node reference to ref = ref -> next;

		* if the ref is not equal to null return the value 

		* else return -1;
*/