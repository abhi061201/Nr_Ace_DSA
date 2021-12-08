#include <iostream>
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

// Node *insert(Node *root, int data)
// {

//     if (root == NULL)
//     {
//         return new Node(data);
//     }
//     cout << "I am currently at \n"
//          << root->data << "\n";
//     cout << "1 for left sub tree and 2 for right sub tree\n";
//     int user = 0;
//     cin >> user;

//     if (user == 1)
//     {
//         root->left = insert(root->left, data);
//     }
//     else
//     {
//         root->right = insert(root->right, data);
//     }

//     return root;
// }
void preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data <<",";
    preorder(root->left);
    preorder(root->right);
}

int main()
{

    // cout<<"Enter the no. of node\n";
    // int n;
    // cin>>n;
    // for(int i=0 ;i<n ;i++){
    //     cout<<"Enter the node you want to insert\n";
    //     int data;
    //     cin>>data;
    //    Node * root= insert(root,data);
    // }

    Node *root = new Node(8);
     root->left= new Node (6);
     root->right= new Node (9);
    
     root->left->left= new Node (7);
     root->right->left= new Node (3);
     root->right->right= new Node (4);
     
 preorder(root);

    return 0;
}