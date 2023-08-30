#include "binary_trees.h"
/**
 * binary_tree_uncle - Function
 *
 * Description: Finds the the uncle of a node.
 *
 * @node: Pointer to the root of the tree.
 *
 * Return: The uncle of the node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
