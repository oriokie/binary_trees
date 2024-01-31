#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @tree: Pointer to the node to check
 *
 * Return: 1 if the node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
