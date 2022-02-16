#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree/subtree to measure the size
 *
 * Return: The size of the tree. 0 if @tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_count, r_count;

	if (tree == NULL)
		return (0);

	l_count = binary_tree_size(tree->left);
	r_count = binary_tree_size(tree->right);

	return (1 + l_count + r_count);
}
