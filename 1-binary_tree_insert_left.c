#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function initialize the binary tree
 * @parent: the root
 * @value: the data
 * Return: the node we need to fill
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		root->left = parent->left;
		parent->left->parent = root;
	}

	root->n = value;
	root->parent = parent;
	root->left = parent->left;
	parent->left = root;
	root->right = NULL;

	return (root);
}
