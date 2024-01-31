#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * using pre-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base Case of the recursion*/
	if (tree == NULL || func == NULL)
		return;
	/*Call the function on the current node*/
	func(tree->n);
	/* Recursively transverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively transverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
