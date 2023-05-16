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
