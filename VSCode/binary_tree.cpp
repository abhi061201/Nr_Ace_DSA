#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        this->data = x;
        left = NULL;
        right = NULL;
    }
};
Node *insertnode(Node *root, int data)
{
    if (root == NULL)
        return new Node(data);

    int user = 0;
    cout << "enter 1 if you want to insert in LST or 2 in RST\n";
    cout<<"i am currently at :"<<root->data<<"\n";
    cin >> user;
    if (user == 1)
    {
        root->left = insertnode(root->left, data);
    }
    else
    {
        root->right= insertnode(root->right,data);
    }
    return root;
}
Node *insert(Node *root, int data)
{

    if (root == NULL)
    {
        return new Node(data);
    }
    cout << "I am currently at \n"
         << root->data << "\n";
    cout << "1 for left sub tree and 2 for right sub tree\n";
    int user = 0;
    cin >> user;

    if (user == 1)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ",";
    preorder(root->left);
    preorder(root->right);
    cout << "\n";
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << ",";
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << ",";
    inorder(root->right);
}
void level(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();
        cout << cur->data << ",";
        if (cur->left != NULL)
        {
            q.push(cur->left);
        }
        if (cur->right != NULL)
            q.push(cur->right);
    }
}

int main()
{
cout<<"Enter the no. of node you want to insert\n";
int n;
cin>>n;
Node *root= NULL;
for (int i=0 ;i<n ;i++){
cout<<"enter the data of node \n";
int d;
cin>>d;
 root= insertnode(root,d);
}
   
    // Node *root = new Node(8);
    // root->left = new Node(6);
    // root->right = new Node(9);

    // root->left->left = new Node(7);
    // root->right->left = new Node(3);
    // root->right->right = new Node(4);

    // // preorder(root);
    // level(root);

    return 0;
}