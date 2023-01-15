#include "binary_trees.h"

/**
  * binary_tree_nodes - checks for nodes with 1 child
  * @tree: a pointer to the root of the binary tree
  *
  * Return: the number of nodes found or NULL if fails
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
