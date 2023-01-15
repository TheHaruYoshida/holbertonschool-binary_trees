#include "binary_trees.h"

/**
  * binary_tree_is_full - checks if a binary tree is full
  * @tree: a pointer to a node in the binary tree
  *
  * Return: 1 if it is full or 0 if it fails
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
