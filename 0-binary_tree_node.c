#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @parent: Pointer to parent node.
 * @value: Value of the newly created node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *p;

	p = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (p == NULL)
		return (NULL);

	p->parent = parent;
	p->left = NULL;
	p->right = NULL;
	p->n = value;

	return (p);
}
