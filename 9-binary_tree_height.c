#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Size of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *right, *left;
	size_t height = 0;

	if (tree == NULL)
		return (height);

	left = tree->left;
	right = tree->right;

	while (right != NULL || left != NULL)
	{
		height += 1;
		if (left != NULL)
			left = left->left;
		if (right != NULL)
			right = right->right;
	}

	return (height);
}
