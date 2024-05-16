#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, otherwise NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	p = node->parent;

	if (p->left == node)
		return (p->right);

	if (p->right == node)
		return (p->left);

	return (NULL);
}

/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, otherwise NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
