#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree 
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree NULL, NULL pointer if not a leaf
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		left_h = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		right_h = binary_tree_leaves(tree->right);
	return (left_h + right_h);
}
