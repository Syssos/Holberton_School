#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 **/
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	free(tree);
}