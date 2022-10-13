#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left = NULL;
    Node *right = NULL;
};
class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void insert(int val, Node *node)
    {
        Node *n = new Node;
        n->data = val;
        if (root == NULL)
        {
            root = n;
            return;
        }
        if (val == node->data)
        {
            cout << "Value Already Exist" << endl;
            return;
        }
        else if (node->data > val)
        {
            if (node->left != NULL)
            {
                insert(val, node->left);
            }
            else
            {
                node->left = n;
            }
        }
        else if (node->data < val)
        {
            if (node->right != NULL)
            {
                insert(val, node->right);
            }
            else
            {
                node->right = n;
            }
        }
    }
    string search(int val, Node *node)
    {
        if (node == NULL)
        {
            return "notfound";
        }
        else if (node->data == val)
        {
            return "found";
        }
        else if (node->data > val)
        {
            return search(val, node->left);
        }
        else if (node->data < val)
        {
            return search(val, node->right);
        }
    }
    void Inorder(Node *temp)
    {
        if (temp == NULL)
        {
            return;
        }
        Inorder(temp->left);
        cout << temp->data << " ";
        Inorder(temp->right);
    }
    Node *Minimum(Node *node)
    {
        while (node->left != NULL)
        {
            node = node->left;
        }
        cout << node->data << endl;
        return node;
    }
    Node *Maximum(Node *node)
    {
        while (node->right != NULL)
        {
            node = node->right;
        }
        cout << node->data << endl;
        return node;
    }
};
int main()
{
    Tree T1;
    T1.insert(100, T1.root);
    T1.insert(70, T1.root);
    T1.insert(200, T1.root);
    T1.insert(120, T1.root);
    T1.insert(400, T1.root);
    T1.Inorder(T1.root);
    cout << endl;
    T1.Minimum(T1.root);
    T1.Maximum(T1.root);
    cout << T1.search(300, T1.root);
    cout << endl;
    cout << T1.search(200, T1.root);
}