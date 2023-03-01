#include "binary_trees.h"

/**
 *binary_tree_depth - the depth of a node given
 *@tree: pointer to the node
 *Return: the depth of the tree/node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
