#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0, otherwise size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizer, sizel;

	if (tree == NULL)
		return (0);

	sizer = binary_tree_size(tree->right);
	sizel = binary_tree_size(tree->left);

	return (sizer + sizel + 1);
}
