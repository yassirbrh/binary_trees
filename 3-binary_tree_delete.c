#include "binary_trees.h"

/**
 * binary_tree_delete - Function
 *
 * Description: Deletes an entire binary tree.
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: No return because it's a void function.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
