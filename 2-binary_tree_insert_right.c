#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node in a binary tree on hte right side
 * @parent: the node that need to be insert
 * @value: the value given for the node
 *
 * Return: a pointer to the new node or NULL if failed
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
