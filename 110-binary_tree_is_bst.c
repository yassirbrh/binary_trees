#include "binary_trees.h"
/**
 * binary_tree_is_bst - Function
 *
 * Description: Checks if a binary tree is a valid Binary Search Tree.
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: 1 if the tree is a valid BST.
 *         0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int result = 1;
	binary_tree_t *node = NULL, *parent = NULL;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->left->n >= tree->n)
		return (0);
	if (tree->right != NULL && tree->right->n <= tree->n)
		return (0);
	node = (binary_tree_t *)tree->parent;
	if (node != NULL)
		parent = node->parent;
	while (parent != NULL)
	{
		if (node == parent->left && tree->n >= parent->n)
			return (0);
		if (node == parent->right && tree->n <= parent->n)
			return (0);
		node = parent;
		parent = node->parent;
	}
	if (tree->left != NULL)
		result &= binary_tree_is_bst(tree->left);
	if (tree->right != NULL)
		result &= binary_tree_is_bst(tree->right);
	return (1 && result);
}
