#include "binary_trees.h"

/**
 * binary_tree_nodes - Function
 *
 * Description: Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: The count of nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
