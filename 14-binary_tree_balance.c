#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);

	return (1 + (a > b ? a : b));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	a = binary_tree_height(tree->left) + 1;
	b = binary_tree_height(tree->right) + 1;

	return (a - b);
}
