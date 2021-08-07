// == Count all the nodes in a binary tree ===================

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
int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
}

// === Sum of all Nodes =========================================

int sumeNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return sumeNodes(root->left) + sumeNodes(root->right) + root->data;
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

    int ans = countNodes(root);
    cout << ans << endl;

    int ans1 = sumeNodes(root);
    cout << ans1 << endl;

    return 0;
}