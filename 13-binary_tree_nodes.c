#include "binary_trees.h"

/**
 * binary_tree_nodes - This function
 * @tree: the node
 * Return: the height of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    int count = 0;
    
    if (tree == NULL)
        return (0);

    if (tree->left != NULL || tree->right != NULL)
    {
        count += binary_tree_nodes(tree->left);
        count += binary_tree_nodes(tree->right);
    return (count + 1);
    }
return (0);
}
