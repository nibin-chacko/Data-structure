#include"main.h"
BST_tree* insert(BST_tree *root,data_t data)
{
    if(root == NULL)   //check the root is null or not
    {
	root = create_node(data);
	return root;
    }
    if(root->data > data)    //enterd data is less than root data it go left side of root data
    {
	root->l_link = insert(root->l_link,data);
    }
    else if(root->data < data)  //enterd data is greater tha root data it go right side of root data
    {
	root->r_link = insert(root->r_link,data);
    }
    else                                 //if the eneterd data and the root data are same 
    {
	printf("DATA PRESENT\n");
    }
    return root;
}
