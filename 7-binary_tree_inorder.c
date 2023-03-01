#include "binary_trees.h"

/**
 *binary_tree_inorder - binary inorder traversal
 *@tree: pointre to the root node
 *@func: pointer toa function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
