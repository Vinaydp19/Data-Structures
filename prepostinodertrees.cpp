#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left,* right;
};
//function to create a node in tree
struct node* newNode(int data)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
//Using recursion we are traversing
void preorder(struct node* node)
{
    if(node == NULL)
        return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
void inorder(struct node* node)
{
    if(node == NULL)
        return;
    
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(struct node* node)
{
    if(node == NULL)
        return;
    
    postorder(node->left);
   postorder(node->right);
    cout<<node->data<<" ";
}
int main() {
	struct node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "Preorder traversal of binary tree is \n";
    preorder(root);
    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);
    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);
}
