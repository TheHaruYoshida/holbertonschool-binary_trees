#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "15-binary_tree_is_full.c"
/**
  * binary_tree_is_perfect - probe if a binary tree is perfect
  * @tree: a pointer to the root node of the tree
  *
  * Return: 1 if its perfect or 0 if it fails
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);
	height_left = binary_tree_size(tree->left);
	height_right = binary_tree_size(tree->right);
	if (binary_tree_is_full(tree) && height_left == height_right)
		return (1);
	return (0);
}
