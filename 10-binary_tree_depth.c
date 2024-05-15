#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the depth.
 *
 * Return: Depth of tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	a = binary_tree_depth(tree->left);
	b = binary_tree_depth(tree->right);

	return (1 + (a > b ? a : b));
}
