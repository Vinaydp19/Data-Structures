#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left,* right;};
	struct node *root = NULL;
//Insertion function
void insert(int val)
{
    struct node* temp,* parent;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    parent=root;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* curr;
        curr=root;
	    //Finding a parent node
        while(curr)
        {
            parent=curr;
            if(temp->data>curr->data)
            {
                curr=curr->right;
            }else
            {
                curr=curr->left;
            }
        }
	    // assigning data to parent node
        if(parent->data>temp->data)
        {
            parent->left=temp;
        }
        else
        {
            parent->right=temp;
        }
    }
}
// inorder traversal
void inorder(struct node *root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);}
int main(){
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int d;
    cin>>d;
    insert(d);
	}
    inorder(root);
    return 0;
    
}
