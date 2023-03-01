#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the number of leaves in a tree
 *@tree: the pointer to the root node
 *Return: number of leaves 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves, leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		left_leaves = binary_tree_leaves(tree->left);
		right_leaves = binary_tree_leaves(tree->right);
		leaves = left_leaves + right_leaves;

		return (leaves);
	}
}
