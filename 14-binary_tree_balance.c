#include "binary_trees.h"

/**
  * binary_tree_balance - measure the balance factor of a binary tree
  * @tree: a pointer to the root of the binary tree
  *
  * Return: the balance of the tree or 0 if it fails
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height += binary_tree_height(tree->left);
	right_height += binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_height - get the height of a binary tree
 * @tree: the root of a binary tree
 *
 * Return: the height or 0 if it fails
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	 size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height += 1 + binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height);
	return (right_height + 1);
}
