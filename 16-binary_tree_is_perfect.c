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
/**
 * binary_tree_is_perfect - Function
 *
 * Description: Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: 0 if the binary tree isn't perfect.
 *         1 if the binary tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_size(tree->right) == binary_tree_size(tree->left))
		return (binary_tree_is_full(tree));
	return (0);
}
