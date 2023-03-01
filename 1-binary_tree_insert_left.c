#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left child of another
 *@parent: pointer to the node to insert the left child in
 *@value: value to store in new node
 *Return: the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild;

	if (parent == NULL)
		return (NULL);

	leftChild = binary_tree_node(parent, value);
	if (leftChild == NULL)
		return (NULL);
	/**
	 *check if the parent has a left child. if it does, the new node
	 *takes its place as the left child, and the old left child becomes the
	 *left child of the newnode and sets the left child of the new node to
	 *the left child
	 */
	if (parent->left != NULL)
	{
		parent->left->parent = leftChild;
		leftChild->left = parent->left;
	}

	parent->left = leftChild;

	return (leftChild);
}
