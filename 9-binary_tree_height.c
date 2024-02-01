#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: the pointer to the root node of the tree to measure the height
 *
 * Return: size of the tree or 0 if the tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Base Case: Height of an empty tree is 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Making sure the height of a leaf node is 0 */

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ?
			(left_height + 1) : (right_height + 1));
}
