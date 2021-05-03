#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{

	binary_tree_t *new_c;

	if (parent == NULL)
		return (NULL);

	new_c = malloc(sizeof(binary_tree_t));
	if (new_c == NULL)
		return (NULL);
	new_c->parent = parent;
	new_c->left = NULL;
	new_c->right = NULL;
	new_c->n = value;

	if (parent->right == NULL)
		parent->right = new_c;
	else
	{
		new_c->right = parent->right;
		parent->right->parent = new_c;
		parent->right = new_c;
	}
	return (new_c);
}
