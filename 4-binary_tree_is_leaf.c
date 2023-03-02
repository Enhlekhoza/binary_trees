"#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * Description: A leaf node is barren(got no kids)
 * @node: node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}"
 https://github.com/Enhlekhoza/binary_trees/blob/main/4-binary_tree_is_leaf.c#:~:text=%23include%20%22,%7D
