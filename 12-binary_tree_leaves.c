#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 * Return: The number of the leaves or NULL if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
