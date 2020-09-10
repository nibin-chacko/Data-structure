#include"main.h"
data_t find_max(BST_tree *root)
{
    if(root == NULL)
    {
	return EMPTY;
    }
    while(root->r_link != NULL)       //max value is in right link 
    {
	root= root->r_link;
    }
    return root->data;
}
