#include "binary_trees.h"
/**
 * array_to_bst - Function
 *
 * Description: Builds a Binary Search Tree from an array
 *
 * @array: Pointer to the array.
 * @size: Size of the array.
 *
 * Return: Pointer to the root of the tree.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
