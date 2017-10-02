#include "bst.h"
#include <assert.h>

int main() {
	// initialize the tree
	init();

	// first, lets's add some values to the tree (can be duplicate!)
	insert(42);
	insert(1);
	insert(1337);
	insert(42);
	insert(99);
	insert(21);
	insert(314);
	insert(13);
	insert(7);

	// now let's test for all inserted numbers to see if they are in
	assert(lookup(42));
	assert(lookup(13));
	assert(lookup(7));
	assert(lookup(99));
	assert(lookup(1));
	assert(lookup(21));
	assert(lookup(314));
	assert(lookup(1337));
	
	// let's check some numbers that should not be in
	assert(!lookup(2));
	assert(!lookup(100));
	assert(!lookup(111));
	assert(!lookup(43));

	printf("Seems like the BST is working fine :D \n");

	return 0;
}
