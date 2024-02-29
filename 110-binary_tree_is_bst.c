#include "binary_trees.h"

int valid_bst(const binary_tree_t *tree, int min, int max);
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (valid_bst(tree, INT_MIN, INT_MAX));
}

/**
 * valid_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @min: Lower bound of checked nored
 * @max: Upper bound of checked nodes
 * Return: 1 if tree is a valid BST
 */
int valid_bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (valid_bst(tree->left, min, tree->n - 1) &&
		valid_bst(tree->right, tree->n + 1, max));
}
