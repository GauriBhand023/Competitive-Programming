#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int sumNodes(node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}
int main()
{ 
    struct node* root=new node(1) ;
    root->left=new node(2) ;
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);

    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<"sum of all elements of node: "<<sumNodes(root);
return 0;
}