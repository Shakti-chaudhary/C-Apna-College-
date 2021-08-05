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

int search(int inorder[], int start, int end, int curr)
{

    for (int i = start; i <= end; i++)
    {

        if (inorder[i] == curr)
        {
            return i;
        }
    }

    return -1;
}

Node *buildTree(int postoerder[], int inorder[], int start, int end)
{
    static int idx = 4;

    if (start > end)
    {
        return NULL;
    }

    int curr = postoerder[idx];
    idx--;
    Node *root = new Node(curr);

    if (start == end)
    {
        return root;
    }

    int pos = search(inorder, start, end, curr);
    root->right = buildTree(postoerder, inorder, pos + 1, end);
    root->left = buildTree(postoerder, inorder, start, pos - 1);

    return root;
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inoeder[] = {4, 2, 1, 5, 3};
    Node *root = buildTree(postorder, inoeder, 0, 4);
    inorderPrint(root);
    cout << endl;
    return 0;
}