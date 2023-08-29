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
	size_t rsize = 0, lsize = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right != NULL)
		rsize = binary_tree_height(tree->right) + 1;
	if (tree->left != NULL)
		lsize = binary_tree_height(tree->left) + 1;
	if (rsize > lsize)
		return (rsize);
	else
		return (lsize);
}
/**
 * binary_tree_balance - Function
 *
 * Description: Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: The balance factor of a binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
