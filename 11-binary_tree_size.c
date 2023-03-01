#include "binary_trees.h"

/**
 *binary_tree_size - the size of a tree - all of its nodes
 *@tree: pointer to the root node
 *Return: size 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftnodes, rightnodes, allnodes;

	if (tree == NULL)
		return (0);

	leftnodes = binary_tree_size(tree->left) + 1;
	rightnodes = binary_tree_size(tree->right);
	allnodes = leftnodes + rightnodes;

	return (allnodes);
}
