#include "binary_trees.h"

/**
 * binary_tree_size - computes the size of the tree
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_leaves - computes the number of leaves inside a tree
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
/**
 * binary_tree_nodes - computes nodes with at least 1 child
 * @tree: node in a tree
 * Return: size_t value
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
