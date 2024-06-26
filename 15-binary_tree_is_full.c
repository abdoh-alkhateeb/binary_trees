#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		a = binary_tree_is_full(tree->left);
		b = binary_tree_is_full(tree->right);
		return (a && b);
	}

	return (0);
}
