#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree in post-order and
 *							calls a function on each node.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to the function to call on each node's data.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
