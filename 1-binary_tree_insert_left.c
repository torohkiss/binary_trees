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
	if (parent == NULL)
		return NULL;

	binary_tree_t *r;

	r = malloc(sizeof(binary_tree_t));

	if (!r)
		return NULL;

	r->n = value;
	r->left = NULL;
	r->right = NULL;

	if (parent->left != NULL)
	{
		r->left = parent->left;
		parent->left = r;
		r->left->parent = r;
	}
	parent->left = binary_tree_node(parent, value);
	return r;
}
