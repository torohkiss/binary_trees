#include "binary_treee.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: the parent node
 * @value: value to add
 *
 * Return: 0
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return NULL;
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;

	return parent;
}
