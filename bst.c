/*
 * create a binary search tree (insertion)
 * pre-order traversal
 * post-order traversal
 * in-order traversal
 * search the tree
 * deletion from the tree
 * height of the tree
 */

#include<stdio.h>
#include<stlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

(struct node *) new_node(int data){
    struct node *new_node = NULL;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void bst_insert(struct node *root, int data){
    if(root

    return;
}

void pre_order(struct node *root){

    return;
}

void in_order(struct node *root){

    return;
}

void post_order(struct node *root){

    return;
}

(struct node *ptr) bst_search(struct node *root, data){

    return;
}

void bst_del(struct node *root, data){

    return;
}

void bst_height(struct node *root){

}

int main(){
    int a[] = {1,9,3,7,4,6};
    int size = (sizeof(a[])/sizeof(a[0]));
    struct node *root = new_node(a[0)];
    for(int i = 1; i < size; i++){
        bst_insert(root, a[i]);
    }
    pre_order(root);
    post_order(root);
    in_order(root);

    return 0;
}
