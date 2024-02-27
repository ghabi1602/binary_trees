#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Include headers */
#include <stdio.h>
#include <stdlib.h>

/* Include structures */
/**
 * struct binary_tree_s - Binary tree node
 * @n: integer stored in the node
 * @parent: pointer to the parent
 * @left: pointer to the left child
 * @right: pointer to the right child
 */
struct binary_tree_s {
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* Include Prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int n);
void binary_tree_print(const binary_tree_t *);

#endif
