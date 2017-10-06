#include "bst.h"

// Initialize a new tree
// @params: void
// @returns: void
void init() {
	tree = malloc(sizeof(tree_t));
	tree->root = NULL;
}

// Insert a value into the tree
// @params: int val => Value to enter into the tree
// @returns: void
void insert(int val) {
	if(tree->root == NULL) {
		node_t *newRoot = malloc(sizeof(node_t));
		newRoot->value = val;
		tree->root = newRoot;
		return;
	}
	node_t *current = tree->root;
	node_t *parent;
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
	node_t *newNode = malloc(sizeof(node_t));
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
	node_t *current = tree->root;

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
