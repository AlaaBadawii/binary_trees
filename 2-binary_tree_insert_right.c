#include "binary_trees.h"


/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp = parent->right;

		node->right = parent->right;
		node->parent = parent;

		parent->right = node;

		temp->parent = node;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
	}

	return (node);
}
