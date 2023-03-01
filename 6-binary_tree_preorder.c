#include "binary_trees.h"

/**
 *binary_tree_preorder - traversing a tree in a preorder style
 *@tree: pointer to root node
 *@func: a pointer to a function to call for each node
 *value in the node must bepassed as aparameter to this function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
