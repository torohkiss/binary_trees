#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value to be inserted
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *r;

	if (parent == NULL)
		return (NULL);

	r = binary_tree_node(parent, value);

	if (!r)
		return (NULL);

	if (parent->left != NULL)
	{
		r->left = parent->left;
		parent->left->parent = r;
	}
	parent->left = r;
	return (r);
}
