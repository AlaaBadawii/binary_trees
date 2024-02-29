#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;

	leaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leaf++;
	if (tree->right)
		leaf++;
	else
		leaf++;
	
	return (leaf);
}
