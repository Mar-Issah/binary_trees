#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: parent of the node
 * @value: value of the node
 * Return: NULL if fails else the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* If parent is null, return null */
	if (parent == NULL)
		return (NULL);

	/* Create new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* If parent already has a left child */
	if (parent->left != NULL)
	{
		/* Set the old left child as the new node's left child */
		new_node->left = parent->left;
		/* Set the new_node as parent for the old left child */
		parent->left->parent = new_node;
	}

	/* Set new_node as parent's left child */
	parent->left = new_node;

	return (new_node);
}