#include "binary_trees.h"

/**
 * binary_tree_depth - Function
 *
 * Description: Measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the root of the tree.
 *
 * Return: The depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
