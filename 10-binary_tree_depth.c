#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the tree, 0 if @ tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
