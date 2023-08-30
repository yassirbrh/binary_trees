#include "binary_trees.h"

/**
 * binary_tree_is_full - Function
 *
 * Description: Checks if a binary tree is full.
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: 0 if the tree isn't full
 *         1 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left && right && 1);
}
