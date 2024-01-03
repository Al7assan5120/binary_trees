#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *p;
    p = malloc(sizeof(binary_tree_t));
    if (p == NULL)
    {
        return (NULL);
    }
    p->left = NULL;
    p->right = NULL;
    p->n = value;
    p->parent = parent;
    return (p);
}
