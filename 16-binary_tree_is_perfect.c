#include "binary_trees.h"

/**
 * binary_tree_size - This function
 * @tree: the node
 * Return: the height of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	binary_tree_size(tree->left);
	binary_tree_size(tree->right);

	return (binary_tree_size(tree->left) + (binary_tree_size(tree->right)) + 1);
}


/**
 * binary_tree_is_perfect - This function
 * @tree: the node
 * Return: the height of the tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	if (left == right)
		return (1);

	return (0);
}
