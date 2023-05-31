#include "binary_trees.h"

/**
 * binary_tree_depth - Computes the depth of a node in a binary tree.
 * @tree: Pointer to the node to calculate the depth for.
 *
 * Return: The depth of the node as a size_t,or 0 on failure or if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
