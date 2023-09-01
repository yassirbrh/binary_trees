#include "binary_trees.h"
/**
 * bst_search - Function
 *
 * Description: Searches for a value in a Binary Search Tree
 *
 * @tree: Pointer to the root of the tree.
 * @value: The value to search in the tree.
 *
 * Return: Pointer to the node containing the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (node == NULL)
		return (NULL);
	if (node->n > value)
		return (bst_search(node->left, value));
	else if (node->n < value)
		return (bst_search(node->right, value));
	return (node);
}
