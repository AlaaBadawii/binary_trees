#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts
 * the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leafr, leafl, count;

	leafl = 0;
	leafr = 0;
	count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count++;
	leafr = binary_tree_nodes(tree->right);
	leafl = binary_tree_nodes(tree->left);

	count += leafl + leafr;

	return (count);
}
