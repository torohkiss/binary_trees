#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node
 * @value: value to be added
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r;

	if (parent == NULL)
		return (NULL);

	r = binary_tree_node(parent, value);

	if (!r)
		return (NULL);

	if (parent->right)
	{
		r->right = parent->right;
		parent->right->parent = r;
	}
	parent->right = r;
	return (r);
}
