#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary tree
 * using the in-order traversal
 *
 * @tree:- pointer to the root node of the tree to transverse
 * @func: pointer to the function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
