#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL return 0
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if ((tree == NULL) || ((tree->right == NULL) && (tree->left == NULL)))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (right_h < left_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
