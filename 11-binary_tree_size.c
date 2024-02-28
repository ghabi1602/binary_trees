#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a node
 * @tree: node in the tree
 * Return: size_t value
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ls, rs;

	if (!tree)
		return (0);

	ls = binary_tree_size(tree->left);
	rs = binary_tree_size(tree->right);
	return (ls + rs + 1);
}
