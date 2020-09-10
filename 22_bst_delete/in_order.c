#include"main.h"

void in_order(BST_tree *root)
{
    if(root == NULL)
    {
	return ;
    }
    in_order(root->r_link);       //call the function with right link
    printf("%d \n",root->data);   //print
    in_order(root->l_link);    //call the function with left link
}
