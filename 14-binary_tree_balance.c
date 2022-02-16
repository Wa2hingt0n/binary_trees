#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of @tree
 *         0 if @tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	else if (tree->left == NULL && tree->right != NULL)
		return (-1);
	else if (tree->left != NULL && tree->right == NULL)
		return (1);

	l_height = binary_tree_balance(tree->left);
	r_height = binary_tree_balance(tree->right);

	return (l_height - r_height);
}
