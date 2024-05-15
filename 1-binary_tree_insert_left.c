#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: Pointer to parent node.
 * @value: Value of the newly created node.
 *
 * Return: pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *p;

	if (parent == NULL)
		return (NULL);

	p = binary_tree_node(parent, value);

	if (p == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		p->left = parent->left;
		parent->left->parent = p;
	}

	parent->left = p;

	return (p);
}
