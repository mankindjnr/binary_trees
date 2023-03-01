#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right child of another node
 *@parent: pointer to the node to insert the right child in
 *@value: the value to store in the new dance
 *Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = binary_tree_node(parent, value);

	if (right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = right_child;
		right_child->right = parent->right;
	}

	parent->right = right_child;

	return (right_child);
}
