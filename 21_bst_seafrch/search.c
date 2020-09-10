#include"main.h"

data_t BST_search(BST_tree *root,data_t data)
{
    if(root == NULL)
    {
	return EMPTY;
    }
    while(root != NULL)     //check the root is not null
    {
	if(root->data == data)     //check with enterd data and root data
	{
	    return FOUND;
	}
	else if(root->data > data)    //if searching data is less than root data the value search only in left link else it search in right side
	    root = root->l_link;
	else
	    root = root->r_link;
    }
    return NOT_FOUND;
}
