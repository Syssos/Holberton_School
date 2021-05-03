#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of node, If tree is NULL, 0
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	count = binary_tree_depth(tree->parent);
	return (count + 1);
}
