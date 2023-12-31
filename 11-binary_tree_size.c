#include "binary_trees.h"

/**
 * binary_tree_size - Function
 *
 * Description: Measures the size of the binary tree.
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}
