#include <iostream>
using namespace std;

// initializing the node;
class Node {
	public :
		int data;
		Node * left;
		Node * right;

		Node(int nodeValue) {
			data = nodeValue;
			left = NULL;
			right = NULL;
		}
};

// push the value into the tree;
Node* push() {
	// to get the data;
	int dataToInsert;
	cout << "Enter the value to insert" << endl;
	cin >> dataToInsert;

	// create the root node;
	Node * root;
	if(dataToInsert == -1) {
		return NULL;
	}

	// set the value to the node;
	root = new Node(dataToInsert);
	root -> left = push(); 
	root -> right = push(); 

	// return the node;
	return root;
}

void printTheTree(Node* root) {
	if(root ==  NULL) {
		return; 
	}
	cout << root->data << endl;
	printTheTree(root->left);
	printTheTree(root->right);
}

int main() {
	Node* root = push();
	cout << "Print the elements " << endl;
	printTheTree(root);
}