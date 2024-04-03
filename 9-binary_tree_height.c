#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  to the root node of the tree
 *
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lh = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rh = 1 + binary_tree_height(tree->right);
	return ((lh > rh) ? lh : rh);
}
