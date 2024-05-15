#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: Count of node with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		a = binary_tree_nodes(tree->left);
		b = binary_tree_nodes(tree->right);
		return (1 + a + b);
	}
	else
		return (0);
}
