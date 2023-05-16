#include "binary_trees.h"

/**
 * binary_tree_depth - This function
 * @tree: the node
 * Return: the height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

	if (tree == NULL)
		return (0);

    if (tree->parent != NULL)
    {
        depth = binary_tree_depth(tree->parent);
        return (depth + 1);
    }

    if (tree->parent == NULL)
        return (0);

return (0);
}
