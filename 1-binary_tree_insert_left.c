#include "binary_trees.h"

/*
   * binary_tree_insert_left - inserts a node in a binary tree
   * @parent: the node given
   * @value: the value given for the node
   *
   * Return: a pointer to the new node or NULL if it fails
   */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return(NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return(new_node);
}
