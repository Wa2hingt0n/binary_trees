#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node.
 *         NULL if @node or @node->parent is NULL or @node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
	}

	if (node == node->parent->right)
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
	}

	return (NULL);
}
