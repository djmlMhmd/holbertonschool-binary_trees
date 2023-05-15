#include "binary_trees.h"

/**
 * binary_tree_is_root - This function check if the node is a leaf
 * @node: the node
 * Return: if is a leaf
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node->left == NULL || node->right == NULL)
        return (0);

    return (1);
}
