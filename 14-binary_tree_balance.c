#include "binary_trees.h"

/**
 * height - returns the height of a tree
 * @tree: binary tree
 * Return: int
 */
int height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (-1);
	lh = tree->left ? 1 + height(tree->left) : 0;
	rh = tree->right ? 1 + height(tree->right) : 0;
	return (lh > rh ? lh : rh);
}
/**
 * binary_tree_balance - computes the balance factor of a tree
 * @tree: binary tree
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}
