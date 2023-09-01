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
/**
 * bst_remove - Function
 *
 * Description: Removes a node from a Binary Search Tree.
 *
 * @root: Pointer to the root of the tree
 * @value: Value to remove the node containing it.
 *
 * Return: The root of the tree.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node = root;

	if (root == NULL)
		return (NULL);
	if (root->n == value && (root->left == NULL || root->right == NULL))
	{
		node = root;
		if (node->left == NULL && node->right == NULL)
		{
			free(node);
			return (NULL);
		}
		if (node->left != NULL && node->right == NULL)
			root = root->left;
		else if (node->right != NULL && node->left == NULL)
			root = root->right;
		root->parent = node->parent;
		if (root->parent->left == node)
			root->parent->left = root;
		if (root->parent->right == node)
			root->parent->right = root;
		free(node);
		return (root);
	}
	if (root->n == value)
	{
		node = node->right;
		while (node->left != NULL)
			node = node->left;
		if (node->right != NULL)
		{
			node->parent->left = node->right;
			node->right->parent = node->parent;
		}
		if (node->right == NULL && node->left == NULL)
			node->parent->left = NULL;
		if (root->parent != NULL && root->parent->left == root)
			root->parent->left = node;
		if (root->parent != NULL && root->parent->right == root)
			root->parent->right = node;
		node->parent = root->parent;
		node->left = root->left;
		node->right = root->right;
		if (node->left != NULL)
			node->left->parent = node;
		if (node->right != NULL)
			node->right->parent = node;
		free(root);
		return (node);
	}
	node = bst_search(root, value);
	if (node == NULL)
		return (NULL);
	bst_remove(node, value);
	return (root);
}
