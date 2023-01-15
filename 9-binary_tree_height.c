#include "binary_trees.h"

/**
  * binary_tree_height - get the height of a binary tree
  * @tree: the root of a binary tree
  *
  * Return: the height or 0 if it fails
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left_tree = 0, height_right_tree = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	height_left_tree = binary_tree_height(tree->left);
	height_right_tree = binary_tree_height(tree->right);
	if (height_left_tree >= height_right_tree)
		return (height_left_tree + 1);
	return (height_right_tree + 1);
}
