#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }

    return max(height(node->left), height(node->right)) + 1;
}

bool isBalanced(Node *root)
{

    if (root == NULL)
    {
        return true;
    }
    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isBalanced2(Node *root,int* height)
{

    if (root == NULL)
    {
        return true;
    }
    int lh=0,rh=0;
    if (isBalanced2(root->left, &lh) == false)
    {
        return false;
    }
    if (isBalanced2(root->right, &rh) == false)
    {
        return false;
    }

    *height=max(lh,rh)+1;

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // root->left->left->right = new Node(8); 
    // root->left->left->right->right = new Node(11);

    // if (isBalanced(root))
    // {
    //     cout << "Balanced tree " << endl;
    // }
    // else
    // {
    //     cout << "UnBalanced tree " << endl;
    // }

    // ==============================================

    int height=0;
    if (isBalanced2(root,&height))
    {
        cout << "Balanced tree " << endl;
    }
    else
    {
        cout << "UnBalanced tree " << endl;
    }

    return 0;
}