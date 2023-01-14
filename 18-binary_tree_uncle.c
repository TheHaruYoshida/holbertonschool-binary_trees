#include "binary_trees.h"

/**
  * binary_tree_uncle - searches for the uncle of a node
  * @node: the node to search for his uncle
  *
  * Return: a pointer to the uncle node
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (0);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
