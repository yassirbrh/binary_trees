#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function
 *
 * Description: Inserts a node as the right-child of another node.
 *
 * @parent: Pointer to the parent node.
 * @value: Value of the node.
 *
 * Return: New node created (Success)
 *         NULL (Failure)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	return (new_node);
}
