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
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

#endif
