#include "binary_trees.h"
/**
 * binary_tree_sibling - Function
 *
 * Description: Finds the sibling of a node.
 *
 * @node: Pointer to the node.
 *
 * Return: The sibling of the node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
