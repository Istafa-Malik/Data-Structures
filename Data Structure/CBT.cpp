#include <iostream>
#include <cmath>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
};
class CBT
{
	private:
		node *root;
		public:
			CBT()
			{
				root=NULL;
			}
			node *createnode(int value)
			{
				node *newnode=new node;
				newnode->data=value;
				newnode->left=NULL;
				newnode->right=NULL;
				root=newnode;
				return newnode;
			}
			int findheight(node *temp)
			{
				if(temp==NULL)
				{
					return 0;
				}
				int left=findheight(temp->left);
				int right=findheight(temp->right);
				if(left>right)
				{
					return left+1;
				}
				else
				{
					return right+1;
				}
			}
				int countnode(node *temp)
				{
					if(temp==NULL)
					{
						return 0;
					}
					int count=1;
					count+=countnode(temp->left);
					count+=countnode(temp->right);
					return count;
				}
				
			
			void insert(int value,node *temp)
			{
			 	if(root==NULL)
			 	{
			 		root=new node;
			 		root->data=value;
			 		root->left=NULL;
			 		root->right=NULL;
			 		return;
				}
				int height=findheight(temp->left);
				int expectednode=pow(2,height)-1;
				int left_tree_node_count=countnode(temp->left);
				int right_tree_node_count=countnode(temp->right);
				if(left_tree_node_count=right_tree_node_count)
				{
					if(temp->left==NULL)
					{
						node *temp1=new node;
						temp1->data=value;
						temp1->left=NULL;
						temp1->right=NULL;
						temp->left=temp1;
						return;
					}
					insert(value,temp->left);
				}
				else if(expectednode!=left_tree_node_count)
				{
					if(temp->left==NULL)
					{
					    node *temp1=new node;
						temp1->data=value;
						temp1->left=NULL;
						temp1->right=NULL;
						temp->left=temp1;
						return;
					}
					insert(value,temp->left);
				}
				else if(temp->right==NULL)
				{
					node *temp1=new node;
					temp1->data=value;
					temp1->left=NULL;
					temp1->right=NULL;
					temp->right=temp1;
					return;
				}
				else if(expectednode!=right_tree_node_count)
				{
					if(temp->left==NULL)
					{
						node *temp1=new node;
						temp1->data=value;
						temp1->left=NULL;
						temp1->right=NULL;
						temp->left=temp1;
						return;
					}
					insert(value,temp->right);
				}
				
			}
			node *getroot()
			{
				return root;
			}
};
int main()
{
	CBT ob;
	ob.insert(10,ob.getroot());
	ob.insert(20,ob.getroot());
	ob.insert(30,ob.getroot());
	ob.insert(40,ob.getroot());
	ob.insert(50,ob.getroot());
	ob.insert(60,ob.getroot());
	ob.insert(70,ob.getroot());
	cout<<"Height of CBT is :"<<ob.findheight(ob.getroot())<<endl;
	cout<<"Number of nodes in CBT "<<ob.countnode(ob.getroot())<<endl;
	return 0;
}
