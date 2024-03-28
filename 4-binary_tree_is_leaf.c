#include "binary_trees.h"
/**
*binary_tree_is_leaf - checks if node is a leaf
*@node: pointer to node to be checked
*Return: 1 for yes and 0 for no
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if ((node->left == NULL) && (node->right == NULL))
return (1);
return (0);
}
