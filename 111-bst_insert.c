#include "binary_trees.h"
/**
 * bst_insert - Function
 *
 * Description: Inserts a value in a Binary Search Tree.
 *
 * @tree: Pointer to the pointer to the root of the tree.
 * @value: Value to add to the node.
 *
 * Return: Pointer to the created node.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *iter;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	iter = *tree;
	if (value > iter->n)
	{
		if (iter->right == NULL)
		{
			iter->right = binary_tree_node(iter, value);
			return (iter->right);
		}
		iter = iter->right;
		return (bst_insert(&iter, value));
	}
	if (value < iter->n)
	{
		if (iter->left == NULL)
		{
			iter->left = binary_tree_node(iter, value);
			return (iter->left);
		}
		iter = iter->left;
		return (bst_insert(&iter, value));
	}
	return (NULL);
}
