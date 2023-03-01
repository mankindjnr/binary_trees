#include "binary_trees.h"

/**
 *binary_tree_nodes - counting node
 *@tree: pointer to the root node
 *Return: number of nodes 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftnodes, rightnodes, allnodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		allnodes++;

	leftnodes = binary_tree_nodes(tree->left);
	rightnodes = binary_tree_nodes(tree->right);

	allnodes += leftnodes + rightnodes;

	return (allnodes);
}
