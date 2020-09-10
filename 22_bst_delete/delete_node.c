#include"main.h"
BST_tree *delete(BST_tree *root,data_t data)
{
    if(root == NULL)
    {
	return NULL;
    }
    else if(root->data < data)         //check the data with root data if data is greater than root that we go right link
    {
	root->r_link = delete(root->r_link,data);   //call the function with right link
    }
    else if(root->data > data)        //check the data with root data if data is less than root data then we go left link
    {
	root->l_link = delete(root->l_link,data); //call the function with left link
    }
    else
    {
	if(root->l_link == NULL && root->r_link == NULL)  //if the left link link and right link are null the free root
	{
	    free(root);
	    root = NULL;
	    return root;
	}
	if(root->l_link != NULL && root->r_link == NULL)   //check the data
	{
	    BST_tree *temp = root;
	    root = root->l_link;
	    free(temp);
	    return root;
	}
	if(root->l_link == NULL && root->r_link != NULL)
	{
	    BST_tree *temp = root;
	    root = root->r_link;
	    free(temp);
	    return root;
	}
	else
	{
	    int x;
	    x = find_min(root);
	    root->data = x;
	    root->r_link = delete(root->r_link,x);
	}
    }
    return root;
}

