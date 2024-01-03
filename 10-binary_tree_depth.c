#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 * @node: node in a tree
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth((binary_tree_t *)node->parent));
}
