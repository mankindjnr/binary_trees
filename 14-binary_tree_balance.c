#include "binary_trees.h"

int height(const binary_tree_t *tree);

/**
 *binary_tree_balance - checking if a binary tree is balanced
 *@tree: pointer to the root node
 *Return: the blance factor 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree_height, right_subtree_height;

	if (tree == NULL)
		return (0);

	left_subtree_height = height(tree->left);
	right_subtree_height = height(tree->right);

	return (left_subtree_height - right_subtree_height);
}

/**
 *height - of the subtrees
 *@tree: pointer to root node
 *Return: height of the subtree
 */
int height(const binary_tree_t *tree)
{
	int leftH, rightH;

	if (tree == NULL)
		return (0);

	leftH = height(tree->left);
	rightH = height(tree->right);

	if (leftH > rightH)
		return (leftH + 1);
	else
		return (rightH + 1);
}
