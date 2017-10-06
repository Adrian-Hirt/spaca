#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	int value;
	struct node *left;	
	struct node *right;
} node_t;

typedef struct tree {
	node_t *root;
} tree_t;

tree_t* tree;

void init();
void insert(int val);
bool lookup(int val);

int main();

#endif /* BST_H */
