#include "binary_trees.h"
/**
 *
 *
 *
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	right_h = binary_tree_leaves(tree->right);
	left_h = binary_tree_leaves(tree->left);
	if ((tree->right == NULL) && (tree->left == NULL))
		return (right_h + 1 + left_h);
	else
		return (right_h + left_h);
}
