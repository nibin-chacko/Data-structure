#include"main.h"
BST_tree* insert(BST_tree *root,data_t data)
{
    if(root == NULL)        //check the root is null or not
    {
	root = create_node(data);   //call the function for creating
	return root;
    }
    if(root->data > data)      //check the data is less or greater than the root data
    {
	root->l_link = insert(root->l_link,data);
    }
    else if(root->data < data)
    {
	root->r_link = insert(root->r_link,data);
    }
    else
    {
	printf("DATA PRESENT\n");
    }
    return root;
}
