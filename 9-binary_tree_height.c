#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  to the root node of the tree
 *
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	else
	{
		lh = binary_tree_height(tree->left);
		rh = binary_tree_height(tree->right);
		return ((lh > rh ? lh : rh) + 1);
	}
}
