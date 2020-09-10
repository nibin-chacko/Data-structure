#ifndef Bst_tree

#define Bst_tree
#include<stdio.h>
#include<stdlib.h>
typedef int data_t;
typedef struct node
{
    data_t data;
    struct node *l_link,*r_link;
}BST_tree;
BST_tree* insert(BST_tree *root,data_t data);
void in_order(BST_tree *root);
void pre_order(BST_tree *root);
void post_order(BST_tree *root);
void level_order(BST_tree *root);
BST_tree *create_node(data_t data);
data_t find_max(BST_tree *root);
data_t find_min(BST_tree *root);
data_t BST_search(BST_tree *root,data_t data);
int bst_height(BST_tree *root);
enum conditions
{
    FAILURE,FOUND,NOT_FOUND,EMPTY
}status;
#endif
