#include "binary_trees.h"

/**
 * binary_tree_sibling - This function
 * @node: the node
 * Return: the height of the tree
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL)
		return (NULL);

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (parent->left == node)
	{
		return (parent->right);
	}

	if (parent->right == node)
	{

		return (parent->left);
	}

	return (NULL);
}
