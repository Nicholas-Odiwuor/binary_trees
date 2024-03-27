#include "binary_trees.h"

/**
 * binary_tree_inorder - function going  through binary tree using in-order
 *
 *@tree: pointer that points to the root node of the tree to traverse

 *@func: pointer that points to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{
	
	
	if (tree && func)
	
	
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
