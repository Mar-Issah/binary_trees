#include "binary_trees.h"
/**
 * tree_is_perfect - func that checks if a binary
 * tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;
	size_t leaves_left = 0;
	size_t leaves_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	if ((height_left == height_right) && (leaves_left == leaves_right))
		return (1);

	return (0);
}
