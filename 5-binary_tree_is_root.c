#include "binary_trees.h"

/**
  * binary_tree_is_root - checks if a node is root
  * @node: the node given to check
  *
  * Return: 1 if the node is root or 0 if fails
  */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
