#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node in the right
 * @parent: the parent node
 * @value: the value to be set
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (!parent->right)
		parent->right = new;
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}
	return (new);
}
