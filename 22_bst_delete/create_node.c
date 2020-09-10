#include"main.h"

BST_tree *create_node(data_t data)
{
    BST_tree *new = malloc(sizeof(BST_tree));     //allocating the memory
    if(new == NULL)
    {
	return NULL;
    }
    new->data = data;   //assign values
    new->r_link = NULL;
    new->l_link = NULL;
    return new;
}
