#include "binary_trees.h"

/**
  * binary_tree_depth - get the depth of a node
  * @tree: a pointer to a node
  *
  * Return: the depth of a node or NULL if fails
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
