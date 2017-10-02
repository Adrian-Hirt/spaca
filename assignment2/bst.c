#include "bst.h"

Tree* tree;

// Define the Node structure
// @fields: 
// - int value => the value held by the node
// - Node *left => a pointer to the node that is the left child of this node
// - Node *right => a pointer to the node that is the right child of this node
struct Node {
	int value;
	Node *left;
	Node *right;
};

// Define the tree structure that holds the first node (root node)
// @fields:
// - Node *root => the root node of this tree
struct Tree {
	Node *root;
};

// Initialize a new tree
// @params: void
// @returns: a pointer to the created tree
void init() {
	tree = malloc(sizeof(Tree));
	tree->root = NULL;
}

// Insert a value into the tree
// @params: int val => Value to enter into the tree
// @returns: void
void insert(int val) {
	if(tree->root == NULL) {
		Node *newRoot = malloc(sizeof(Node));
		newRoot->value = val;
		tree->root = newRoot;
		return;
	}
	Node *current = tree->root;
	Node *parent;
	bool inLeftSubTree;
		
	while(current != NULL) {
		if(current->value == val) {
			// value already in tree, returning
			return;
		}
		// right subtree
		else if(current->value < val) {
			parent = current;
			current = current->right;
			inLeftSubTree = false;
		}
		// left subtree
		else {
			parent = current;
			current = current->left;
			inLeftSubTree = true;
		}
	}
	Node *newNode = malloc(sizeof(Node));
	newNode->value = val;
	if(inLeftSubTree) {
		parent->left = newNode;
	}
	else {
		parent->right = newNode;
	}	
}

// Search the value passed as param in the tree
// @params: int val => Value to search for in the search tree
// @returns: true if the value was found in the tree, false otherwise
bool lookup(int val) { 
	if(tree->root == NULL) {
		return false;
	}
	Node *current = tree->root;

	while(current != NULL) {
		if(current->value == val) {
			return true;
		}
		if(current->value < val) {
			current = current->right;
		}
		else {
			current = current->left;
		}
	}	
	return false;
}
