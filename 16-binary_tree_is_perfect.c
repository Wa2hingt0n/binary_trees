#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: - 1 if @node is a leaf
 *         - 0 if @node is not a leaf or is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int ret = 0;

	if (node == NULL)
		return (ret);

	if (node->left == NULL && node->right == NULL)
		ret = 1;

	return (ret);
}

/**
 * find_height - Obtains the height of a binary tree
 * @tree: Pointer to the root node of the tree to obtain its height
 *
 * Return: The height of the tree
 *         0 if @tree is NULL
 */
size_t find_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	l_height = find_height(tree->left);
	r_height = find_height(tree->right);

	if (l_height >= r_height)
		return (1 + l_height);
	else
		return (1 + r_height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if @tree is perfect
 *         0 if @tree is not perfect or is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);

	l = tree->left;
	r = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (l == NULL || r == NULL)
		return (0);

	if (find_height(l) == find_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}

	return (0);
}
