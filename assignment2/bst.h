#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node Node;
typedef struct Tree Tree;

void init();
void insert(int val);
bool lookup(int val);

int main();

#endif /* BST_H */
