#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: the parent node
 * @value: value to add
 *
 * Return: newNode
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
