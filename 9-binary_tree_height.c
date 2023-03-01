#include "binary_trees.h"

size_t calculate_height(const binary_tree_t *tree, size_t height);

/**
 *binary_tree_height - the height of a binary tree
 *@tree: pointer to the root node
 *Return: 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = 0;
	height = calculate_height(tree, height);
	return (height - 1);
}

/**
 * calculate_height - Calculates the height of a binary tree.
 * @tree: The node that will act as root when calculating the height.
 * @height: The actual height of the tree.
 * Return: The height of the tree.
 */
size_t calculate_height(const binary_tree_t *tree, size_t height)
{
	size_t left;
	size_t right;

	left = height;
	right = height;
	if (tree == NULL)
		return (0);
	left = left + calculate_height(tree->left, height);
	right = right + calculate_height(tree->right, height);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 *This line of code calculate the height of a binary tree recursively. It checks
 *if the left subtree has a greater height than the right subtree, and if so,
 *returns the height of the left subtree. Otherwise, it returns the height of
 *the right subtree. The ?: operator is a ternary operator that takes three
 *operands: a boolean expression, a value to return if the boolean expression
 *is true, and a value to return if the boolean expression is false. In this
 *case, the boolean expression is left_height > right_height, the value to
 *retrn if true is left_height,and the value to return if false is right_height.
 *The + 1 at the end of the line adds 1 to the height to account for the root
 *node of the binary tree
 */
