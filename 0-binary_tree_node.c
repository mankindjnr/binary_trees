#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_node - function creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: a pointer to the new node or NULL ON FAILURE
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (parent != NULL)
		return (NULL);

	temp = malloc(sizeof(binary_tree_t));
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	parent = temp;

	return (parent);
}
