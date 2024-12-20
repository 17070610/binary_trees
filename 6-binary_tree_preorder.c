#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre_order traversal
 *
 * @tree: Pointer to the root of the tree to travarse
 * @func: A pointer to the function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
