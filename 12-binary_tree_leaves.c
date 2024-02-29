#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafr, leafl, count;

	leafl = 0;
	leafr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leafr = binary_tree_leaves(tree->right);
	leafl = binary_tree_leaves(tree->left);
	
	count = leafr + leafl;

	return (count);
}
