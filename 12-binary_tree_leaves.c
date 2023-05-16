#include "binary_trees.h"

/**
 * binary_tree_leaves - This function
 * @tree: the node
 * @func: the function
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int num_leaves = 0;

	if (tree == NULL)
	return (0);

	if (tree->right == NULL && tree->left == NULL)
	num_leaves++;

	num_leaves += binary_tree_leaves(tree->right);
 	num_leaves += binary_tree_leaves(tree->left);

	return (num_leaves);
}
