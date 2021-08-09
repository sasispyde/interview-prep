/*
	* Binary it is a form of stroing the data;
	
	* it have atmost two childrens;
	
	* Each element in the binary tree have two child nodes like left and the right;

	* it mainly have 3 parts like data left and the right pointers;

	* it is a non linear data structures
	
	* the top most element is called as ROOT element;

	* and the element directly under the element is called CHILDRENS;

	* the element directly above something is called PARENT element;

	* Example :
			
				  a       -----> ROOT Element
				/	\	
	Left <---- b      c   ----->  Right
			  / \    / \
			 d   e  f   g -----> Levels
	
	here a --> is the the Root element;
	
	b , c is the right and the left child of the the ROOT node;

	b -> left child;

	c -> right child;

	a -> is the PARENT of both b and c;

	The Element with no children is called as LEVELS

	WHEN TREES are USEFUL : 
		
		* when we need to store the data in hierarchy order for example file system;

		* data access is faster compared to linked list but slower then array;

		* the inserting element is faster compared to array but slower then unordered linked list;

		* thrie is no upper limits in nodes to insert;

	Usgae of Trees : 

		* manipulate hierarchical data;

		* easy to seacch for data;

		* manipulate sorted list of data;
	
		* form of a multi-stage decision-making;

		* router algorithms;

	the tree is represented by the topmost node in the list;

	if the tree is empty the root element value is NULL;

*/

#include <iostream>
using namespace std;
// The Class which will represents the DATA format of an TREE;
class Node {
	public : 
		int data;
		Node * left;
		Node * right;

		Node(int d) {
			data = d;
			right = NULL;
			left = NULL; 
		}

};

Node* insertNode(int data, int leftData, int rightData){
	Node* root;
	root = new Node(data);
	
	// inserting left element;
	if(!leftData || leftData == 0) {
		root -> left = leftData;
	}
	else {
		root -> left = NULL;
	}
	
	// inseting the right element;
	if(!rightData || rightData == 0) {
		root -> right = rightData;
	}
	else {
		root -> right = NULL;
	}
}

/* Function for tree traversal of every node in the tree. */
void traversal(struct Node *root) {
    if(root == NULL)
        return;
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
}

int main()
{
    Node*root = insertNode(1,2,3);  
    traversal(root);
  	return 0;
}