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
