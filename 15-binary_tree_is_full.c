#include "binary_trees.h"

/**
 * binary_tree_is_full - This function
 * @tree: the node
 * Return: the height of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0;
	int right_full = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == 0 && tree->right == 0)
		return (1);
	if (tree->left != 0 || tree->right != 0)
	{	
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		return (right_full && left_full);
	}
	return (0);
}
