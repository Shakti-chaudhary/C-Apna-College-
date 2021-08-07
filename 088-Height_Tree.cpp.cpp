// == Height of Tree ============================================

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

int heightNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = heightNodes(root->left);
    int rheight = heightNodes(root->right);

    return max(lheight, rheight) + 1;
}

// == Diameter of Tree, (highest leaf to leaf distance ) ========

int Diameter(Node *root) /*  Big O(n^2)  */
{
    if (root == NULL)
    {
        return 0;
    }
    int lheigth = heightNodes(root->left);
    int rheight = heightNodes(root->right);
    int curDiameter = lheigth + rheight + 1;

    int lDiameter = Diameter(root->left);
    int rDiameter = Diameter(root->right);

    return max(curDiameter, max(lDiameter, rDiameter));
}

// ==============================================================

int CalDiameter(Node *root, int *height) /*  Big O(n)  */
{
    if (root == NULL)
    {
        *height=0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lDiameter = CalDiameter(root->left, &lh);
    int rDiameter = CalDiameter(root->right, &rh);

    int curDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(curDiameter, max(lDiameter, rDiameter));
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

    // int ans = heightNodes(root);
    // cout << ans << endl;

    // int ans1 = Diameter(root);
    // cout << ans1 << endl;

    int height=0;
    cout<<CalDiameter(root,&height)<<endl; 

    return 0;
}