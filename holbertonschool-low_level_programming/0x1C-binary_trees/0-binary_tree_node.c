#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: value of node
 * Return: pointer to new node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{

	binary_tree_t *new_c;

	new_c = malloc(sizeof(binary_tree_t));
	if (new_c == NULL)
		return (NULL);
	new_c->parent = parent;
	new_c->left = NULL;
	new_c->right = NULL;
	new_c->n = value;
	return (new_c);

}
