#include"binary_trees.h"


size_t binary_tree_height(const binary_tree_t *tree)
{
    int r, l;

    if (tree == NULL)
        return (0);
    else
    {
        r = binary_tree_height(tree->right);
        l = binary_tree_height(tree->left);
        if (l > r)
            return(l + 1);
        else
            return (r + 1);
    }
}
