#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
 class bst
 {
 	Node* temp;
 	public:
 		Node* root;
    BST()
    {
    	root=temp=NULL;
	}

Node* newNode(int key)
{
    Node* temp2 = new Node;
    temp2->data = key;
    temp2->left = temp2->right = NULL;
 
    return temp2;
}
 
void inorder(Node *temp)
{
    if (root == NULL)
        return;
 
    if( temp->left!=NULL )
    {
    	inorder(temp->left);
    }
    
  	cout<<temp->data<<"  ";
  	
  	if( temp->right!=NULL )
  	{
		inorder(temp->right);
	}
	
  return;
}
 

Node* miniKey(Node* curr)
{
    while (curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}
 
void insert(Node* temp, int key)
{
    //cout<<"insert<<endl"<<endl;
    if (root == NULL)
    {
        temp=newNode(key);
        root=temp;
        return;
	}
	
    if( temp->data==key )
    {
      cout<<" Following number is present in the tree. "<<endl;
      return;
    }

    if (temp->data >key)
    {
    	if(temp->left !=NULL)
		{
			insert(temp->left, key);
			return;
 		}
 		else
 		{
 			temp->left=newNode(key);
 			cout<<temp->left->data<<endl;
	 		return;
		}
	}
    else
    {
    	if(temp->right!=NULL)
		{
			insert(temp->right, key);
			return;
 		}
 		else
 		{
 			temp->right=newNode(key);
 			cout<<temp->right->data<<endl;
	 		return;
		}
	}
}
 

void searchKey(Node* &curr, int key, Node* &parent)
{
    
    while (curr != NULL && curr->data != key)
    {
        
        parent = curr;
 
        
       
        if (key < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
}
 
//  delete node from  BST
void deleteNode(Node* root, int key)
{
    Node* parent = NULL;
    Node* curr = root;
    searchKey(curr, key, parent);
    if (curr == NULL)
        return;
    {
    // Case 1: node to be deleted has no children 
    if (curr->left == NULL && curr->right == NULL)
        
        if (curr != root)
        {
            if (parent->left == curr)
                parent->left = NULL;
            else
                parent->right = NULL;
        }
        else
            root = NULL;   
        delete curr;     
    }
    // Case 2: node to be deleted has two children
    else if (curr->left && curr->right)
    {
        
        Node* heir  = miniKey(curr->right);
 
        
        int val = heir->data;
 
        
        
        deleteNode(root, heir->data);
 
 
        
        curr->data = val;
    }
 
    // Case 3: node to be deleted has only one child
    else
    {
        
        Node* child = (curr->left)? curr->left: curr->right;
 
        
        
        if (curr != root)
        {
            if (curr == parent->left)
                parent->left = child;
            else
                parent->right = child;
        }
        else
            root = child;
 
        
        delete curr;
    }
}
};
int main()
{
	bst a;
        a.insert(a.root, 50);
        a.insert(a.root, 40);
        a.insert(a.root, 60);
        a.insert(a.root, 34);
        a.insert(a.root, 38);
        a.insert(a.root, 37);
        a.insert(a.root, 36);
        a.insert(a.root, 55);
        a.insert(a.root, 65);
        a.insert(a.root, 58);
        a.insert(a.root, 67);
        a.insert(a.root, 63);
        a.insert(a.root, 62);
        a.insert(a.root, 61);
        cout<<" Inorder "<<endl;
    a.inorder(a.root);
    cout<<" delete "<<endl;
    cout<<"case1: deleted node have no chlid "<<endl;
    a.deleteNode(a.root, 36);
    a.inorder(a.root);
    cout<<"case 2: deleted node have one chlid"<<endl;
    a.deleteNode(a.root, 36);
    a.inorder(a.root);
    cout<<"case 3: deleted node have two chlid"<<endl;
    a.deleteNode(a.root, 60);
    a.inorder(a.root);
 
    return 0;
}
