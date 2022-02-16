#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 *
 * Return: The number of leaves on the binary tree
 *         0 if @tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_count, r_count;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	l_count = binary_tree_leaves(tree->left);
	r_count = binary_tree_leaves(tree->right);

	return (l_count + r_count);
}
