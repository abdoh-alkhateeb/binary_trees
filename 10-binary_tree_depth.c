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
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
