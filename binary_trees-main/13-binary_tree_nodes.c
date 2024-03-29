#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts the nodes with
* at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the nodes
* Return: number of nodes with at least 1 child in a binary tree
*, 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nodes = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	return (nodes);
}
