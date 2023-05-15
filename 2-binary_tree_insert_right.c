#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function initialize the binary tree
 * @parent: the root
 * @value: the data
 * Return: the node we need to fill
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	root = malloc(sizeof(binary_tree_t));
	if (root == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		root->right = parent->right;
		parent->right->parent = root;
	}

	root->n = value;
	root->parent = parent;
	root->right = parent->right;
	parent->right = root;
	root->left = NULL;

	return (root);
}
