#include <stdlib.h>
#include <stdio.h>
#include "binary.trees.h"
#include <string.h>
/**
 * binary_tree_node - creats a binary tree node 
 *
 * Return: parent pointer to node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node 
}
