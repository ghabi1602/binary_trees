#include "binary_trees.h"

/**
 * binary_tree_depth - calcultes the depth of a node
 * @tree: node in a tree
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
