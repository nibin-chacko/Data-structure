#include"main.h"

BST_tree *create_node(data_t data)
{
    BST_tree *new = malloc(sizeof(BST_tree));      //allocating the memory
    if(new == NULL)
    {
	return NULL;
    }
    new->data = data;         //assign the data
    new->r_link = NULL;         //assign the right link and left link as null
    new->l_link = NULL;
    return new;
}
