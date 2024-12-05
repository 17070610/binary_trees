#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root node
 *
 * @node: Pointer to the node to check
 * Return: 1 if the node is the root or 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
