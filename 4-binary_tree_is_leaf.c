#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check if a node is leaf
  * @node: node given
  *
  * Return: 1 it the node is leaf or 0 if not
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}

