#include <iostream>

// not using the element of the list
void swap(Node*& a, Node*& b) 
{ 
  
    Node* temp = a; 
    a = b; 
    b = temp; 
}
  
void swapNodes(Node** head_ref, int x, int y) 
{ 
  
    // Nothing to do if x and y are same 
    if (x == y) 
        return; 
  
    Node **a = NULL, **b = NULL; 
  
    // search for x and y in the linked list 
    // and store therir pointer in a and b 
    while (*head_ref) { 
  
        if ((*head_ref)->data == x) { 
            a = head_ref; 
        } 
  
        else if ((*head_ref)->data == y) { 
            b = head_ref; 
        } 
  
        head_ref = &((*head_ref)->next); 
    } 
  
    // if we have found both a and b 
    // in the linked list swap current 
    // pointer and next pointer of these 
    if (a && b) { 
  
        swap(*a, *b); 
        swap(((*a)->next), ((*b)->next)); 
    } 
} 


void swapNodes(Node **head_ref, int x, int y)  
{  
	// Nothing to do if x and y are same  
	if (x == y) return;  
	  
	// Search for x keep track of prevX and CurrX  
	Node *prevX = NULL, *currX = *head_ref;  
	while (currX && currX->data != x)  
	{  
	    prevX = currX;  
	    currX = currX->next;  
	}  
	  
	// Search for y (keep track of prevY and CurrY  
	Node *prevY = NULL, *currY = *head_ref;  
	while (currY && currY->data != y)  
	{  
	    prevY = currY;  
	    currY = currY->next;  
	}  
	  
	// If either x or y is not present, nothing to do  
	if (currX == NULL || currY == NULL)  
	    return;  
	  
	// If x is not head of linked list  
	if (prevX != NULL)  
	    prevX->next = currY;  
	else // Else make y as new head  
	    *head_ref = currY;  
	  
	// If y is not head of linked list  
	if (prevY != NULL)  
	    prevY->next = currX;  
	else // Else make x as new head  
	    *head_ref = currX;  
	  
	// Swap next pointers  
	Node *temp = currY->next;  
	currY->next = currX->next;  
	currX->next = temp;  
}


// using the element of the list ( consider the values are distinct )

void swapElememts ( Node ** node ,int x ,int y) {
	// base case if the two elements are same;
	if(x == y) return;

	Node * list = *node;

	// two temporary pointer to hold the reference;

	Node * x_position = NULL;
	Node * y_position = NULL;

	// loop the list to find the data position in the list
	while( list ) {
		// store the data
		int data = list -> data;
		// data == x means x_position to list current node;
		if( data == x ) {
			x_position = list;
		// data == y means y_position to list current node;
		} else if( data == y ) {
			y_position = list;
		}
		list = list -> next;
	}

	// if any x or y is NULL return;
	if( !(x_position && y_position) ) return;

	// swap the data;
	int temp = x_position -> data;
	x_position -> data = y_position -> data;
	y_position -> data = temp;
}

// swap elements in pair wise;

void pairWiseSwap( Node ** node ){
	
	// if the node is NULL or Node -> next is NULL return;
	if(!*node || !(*node) -> next ) return;

	// store the node to new reference variable called;
	Node * list = *node;

	// loop the list condition is ( list != NULL && list -> next != NULL );
	while( list && list -> next ) {

		// swap the elements;
		int temp = list -> data;
		list -> data = list -> next -> data;
		list -> next -> data = temp;

		// increment list to two steps;
		list = list -> next -> next;
	}
}
