#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function
 *
 * Description: Checks if a node is a leaf.
 *
 * @node: Pointer to the node to check if it is a leaf.
 *
 * Return: 1 if node is a leaf
 *         0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
