#include"main.h"

data_t find_min(BST_tree *root)
{
    if(root == NULL)
    {
	return EMPTY;
    }
    while(root->l_link != NULL)   //mininimum value is in left link
    {
	root=root->l_link;
    }
    return root->data;
}
