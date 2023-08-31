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
/**
 * binary_tree_levelorder - Function
 *
 * Description: Goes through a binary tree using level-order traversal.
 *
 * @tree: Pointer to the root of the tree.
 * @func: Pointer to the function.
 *
 * Return: No return because it's a void function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree != NULL && func != NULL)
	{
		height = binary_tree_height(tree);
		func(tree->n);
	}
}