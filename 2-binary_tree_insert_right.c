#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *p_right;
    void *ptr;
    p_right = binary_tree_node(parent, value);

    if (parent -> right == NULL)
    {
        parent->right = p_right;
    }
    else
    {
        ptr = parent->right;
        parent->right = p_right;
        p_right->right = ptr;
    }
    return p_right;
}
