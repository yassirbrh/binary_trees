#include "binary_trees.h"

/**
 * binary_tree_height - Function
 *
 * Description: Measures the height of a binary tree
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rsize, lsize;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	rsize = binary_tree_height(tree->right) + 1;
	lsize = binary_tree_height(tree->left) + 1;
	if (rsize > lsize)
		return (rsize);
	else
		return (lsize);
}
