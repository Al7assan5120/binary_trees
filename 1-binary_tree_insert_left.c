#include"binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;
    binary_tree_t *old_left = NULL;

    if (parent == NULL)
    {
        return (NULL);
    }

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->right = NULL;

    if (parent->left != NULL)
    {
        old_left = parent->left;
        old_left->parent = new_node;
    }

    new_node->left = old_left;
    parent->left = new_node;

    return (new_node);
}