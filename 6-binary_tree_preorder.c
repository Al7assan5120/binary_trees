#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that find preorder traversals of a binary tree
 * @tree: tree to go through
 * @func: pointer to a function to call for each node.
 * Return: the height
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
