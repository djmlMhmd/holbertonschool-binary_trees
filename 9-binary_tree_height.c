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
