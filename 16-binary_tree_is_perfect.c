#include "binary_trees.h"

/**
 * binary_tree_height - This function
 * @tree: the node
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countleft = 0;
	size_t countright = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	countleft = binary_tree_height(tree->left);
	countright = binary_tree_height(tree->right);

	if (countleft >= countright)
		return (countleft + 1);

	else
		return (countright + 1);
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

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

    if (tree->left == NULL || tree->right == NULL)
        return (0);

	if (left == right)
		return (1);

	return (0);
}
