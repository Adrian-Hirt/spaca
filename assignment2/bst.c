#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node Node;
typedef struct Tree Tree;

void test();

void init();
void insert(int val);
bool lookup(int val);

Tree* tree;

int main() {
	init();
	printf("tree_root: %p \n", tree);
	return 0;
}


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

}

// Search the value passed as param in the tree
// @params: int val => Value to search for in the search tree
// @returns: true if the value was found in the tree, false otherwise
bool lookup(int val) { 
	return false;
}

// run some tests
void test() {
	Node* first = malloc(sizeof(Node));
	first->value = 42;

	printf("val is %i \n", first->value);
	printf("right is %p \n", first->right);

	Node* second = malloc(sizeof(Node));
	second->value = 1337;

	printf("val is %i \n", second->value);
	first-> right = second;

	printf("right is %p \n", first->right);
	printf("value of right is %i \n", first->right->value);
}
