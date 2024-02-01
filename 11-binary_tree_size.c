#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of binary tree
 * @tree: a pointer to the tree to measure the size
 *
 * Return: 0 or the size of the binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
	{
		return (0);
	}
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
