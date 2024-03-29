#include "binary_trees.h"

/**
* binary_tree_height -  measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of the tree or 0 if tree == NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
* binary_tree_balance - function that measures
* the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor of a binary tree, 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);
	balance = binary_tree_height(tree->left) -
	binary_tree_height(tree->right);
	return (balance);
}
