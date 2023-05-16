#include "binary_trees.h"

/**
 * binary_tree_uncle - This function
 * @node: the node
 * Return: the height of the tree
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *grandpere = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandpere = parent->parent;

	if (grandpere->left == parent)
	{
		return (grandpere->right);
	}

	else if (grandpere->right == parent)
	{

		return (grandpere->left);
	}

	return (NULL);
}
