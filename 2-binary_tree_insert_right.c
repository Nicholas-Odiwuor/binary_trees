#include "binary_trees.h"




/**
 * binary_tree_insert_right - inserts node  right-child of another node.
 *@parent: pointer to  node to insert the right-child in.
 *@value: value to store in the new node,
 * Return: return pointer to the created node, /NULL in failure
 */



binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
	
	
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	
	
	
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;



	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
