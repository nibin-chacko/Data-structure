#include"main.h"

data_t find_min(BST_tree *root)
{
    if(root == NULL)
    {
	return EMPTY;
    }
    while(root->l_link != NULL)
    {
	root=root->l_link;
    }
    return root->data;
}
