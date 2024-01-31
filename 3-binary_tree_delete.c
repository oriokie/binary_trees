#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Base Case of the recursion*/
	if (tree == NULL)
		return;
	/* Recursive calls for both sub-trees*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/* Free the root node (Actual deletion)*/
	free(tree);
}
