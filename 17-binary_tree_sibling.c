#include "binary_trees.h"

/**
 * binary_tree_sibling - This function
 * @node: the node
 * Return: the height of the tree
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

		 parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}

	else if (parent->right == node)
	{

		return (parent->left);
	}

	return (NULL);
}
