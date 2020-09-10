#include"main.h"

void in_order(BST_tree *root)
{
    if(root == NULL)
    {
	return ;
    }
    in_order(root->r_link);  //first print the left datas
    printf("%d  ",root->data);   
    in_order(root->l_link);   //then right datas
}
