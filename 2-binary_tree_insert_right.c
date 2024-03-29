#include "binary_trees.h"

/**
* binary_tree_insert_right - function that inserts a node
* as the right-child of another node
* @parent: function that inserts a node as the right-child of another node
* @value: function that inserts a node as the right-child of another node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = new_node;
		return (new_node);
	}
	temp = parent->right;
	parent->right = new_node;
	new_node->right = temp;
	temp->parent = new_node;
	return (new_node);
}
