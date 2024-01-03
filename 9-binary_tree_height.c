#include"binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Pointer to the created nodeL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int r, l;

	if (tree == NULL)
		return (0);
	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
