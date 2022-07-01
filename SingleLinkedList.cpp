#include<bits/stdc++.h>
using namespace std;

struct node{                      //structre is created
	int data;
	struct node* link;
};

struct node* root=NULL;         //root variable  initially root is null
void append(void);
int Length(struct node*);
void display(void);
void Addatbegin(void);
void Addatafter(void);
void Display(void);
void Quit();
void del(struct node*);
//int len;
int main()
{
	int len;
	int ch;
	while(1){
		cout<<endl;
		cout<<"single linked list operations"<<endl;
		cout<<"1:Append"<<endl;
		cout<<"2:Add at begin"<<endl;
		cout<<"3:Add at after"<<endl;
		cout<<"4:Length"<<endl;
		cout<<"5:Display"<<endl;
		cout<<"6:delete"<<endl;
		cout<<"7:exit"<<endl;
		cout<<"Enter an operation"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1: append();
				break;
			case 2: Addatbegin();
				break;	
			case 3: Addatafter();
				break;  
			case 4:len= Length(root);
					cout<<len;
					break;
			case 5: Display();
				break;
			case 6: del(root);
				break;
			case 7: exit(1);
		
			default:cout<<"NO operation !"<<endl;
		}
	}	
	
}

void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));  //here we are allocating memory in dynamically to temp variable
	
	cout<<"Enter node data:"<<endl;
	cin>>temp->data;
	temp->link =NULL;
	
	if(root == NULL)   //List is empty
	{
		root=temp;
	}
	else{
		struct node* p;
		p=root;
		while(p->link !=NULL){
			p=p->link;
		}
		
		p->link=temp;
		
	}
}
int Length(struct node* root)
{
	int count=0;
	struct node* temp;
	temp=root;
	//cout<<temp;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}	
	return count;
}

void Display()
{
	struct node* temp;
	temp=root;
	if(temp == NULL)
	{
		cout<<"NO elements in list"<<endl;
	}
	else
	{
		while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->link;
		}	
		cout<<endl;
	}
	
	
}
void del(struct node* root)
{
	struct node* temp;
	int loc;
	int n=4;
	cout<<"Enter location:\n";
	cin>>loc;
	if(loc>n)
	{
		cout<<"Invalid location!"<<endl;
	}
	else if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else{
		struct node*p=root,*q;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}
void Addatafter()
{	
}
void Addatbegin()
{	
}









