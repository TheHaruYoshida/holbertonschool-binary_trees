#include "binary_trees.h"

/**
  * binary_tree_sibling - probe the sibling of a node
  * @node: a pointer to the node
  *
  * Return: a pointer to the sibling
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
