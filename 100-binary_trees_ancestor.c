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
/**
 * binary_trees_ancestor - Function
 *
 * Description: Finds the lowest common ancestor of two nodes.
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: The lowest common ancestor of two nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	binary_tree_t *first_node = (binary_tree_t *)first;
	binary_tree_t *second_node = (binary_tree_t *)second;
	size_t gap;

	if (first == NULL || second == NULL)
		return (NULL);
	if (binary_tree_depth(first) > binary_tree_depth(second))
	{
		gap = binary_tree_depth(first) - binary_tree_depth(second);
		while (gap > 0)
		{
			first_node = first_node->parent;
			gap--;
		}
	}
	else if (binary_tree_depth(first) < binary_tree_depth(second))
	{
		gap = binary_tree_depth(second) - binary_tree_depth(first);
		while (gap > 0)
		{
			second_node = second_node->parent;
			gap--;
		}
	}
	while (first_node != second_node)
	{
		first_node = first_node->parent;
		second_node = second_node->parent;
	}
	return (first_node);
}
