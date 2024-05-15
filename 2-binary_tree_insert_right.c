#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of another node.
 *
 * @parent: Pointer to parent node.
 * @value: Value of the newly created node.
 *
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *p;

	if (parent == NULL)
		return (NULL);

	p = binary_tree_node(parent, value);

	if (p == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		p->right = parent->right;
		parent->right->parent = p;
	}

	parent->right = p;

	return (p);
}
