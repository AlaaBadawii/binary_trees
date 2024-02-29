#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *templ, *tempr;

	if (tree == NULL)
		return;

	tempr = tree->right;
	templ = tree->left;

	free(tree);

	if (templ == NULL && tempr == NULL)
		return;

	binary_tree_delete(templ);
	binary_tree_delete(tempr);
}
