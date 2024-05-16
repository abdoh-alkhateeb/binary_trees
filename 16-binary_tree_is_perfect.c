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
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);

	return (1 + a + b);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, s, r;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);
	s = binary_tree_size(tree);

	for (r = 1; h > 0; h--)
		r *= 2;

	return (r - 1 == s);
}
