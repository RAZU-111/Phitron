#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *Left;
    node *right;
    node *Parent;
};

class BinaryTree
{
public:
    node *root;

    BinaryTree()
    {
        root = NULL;
    }
    node *createNewNode(int id)
    {
        node *newNode = new node;
        newNode->id = id;
        newNode->Left = NULL;
        newNode->right = NULL;
        newNode->Parent = NULL;
        return newNode;
    }
    void Insertion(int id)
    {
        node *newNode = createNewNode(id);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            if (a->Left != NULL)
            {

                q.push(a->Left);
            }
            else
            {
                a->Left = newNode;
                newNode->Parent = a;
                return;
            }
            if (a->right != NULL)
            {

                q.push(a->right);
            }
            else
            {
                a->right = newNode;
                newNode->Parent = a;
                return;
            }
        }
    }
    void BFS()
    {
        if(root== NULL)
        return;
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if (a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }
            if (a->Parent != NULL)
            {
                p = a->Parent->id;
            }
            cout << "Node Id : " << a->id << " Left child :" << l;
            cout << " Right Child : " << r << " Parent id : " << p << endl;
        }
    }

    void DFS(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        DFS(a->Left);
        DFS(a->right);
    }

    void Inorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        Inorder(a->Left);
        cout << a->id << " ";

        Inorder(a->right);
    }

    void preorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        preorder(a->Left);
        preorder(a->right);
    }

    void postorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }

        postorder(a->Left);
        postorder(a->right);
        cout << a->id << " ";
    }
};

int main()
{
    BinaryTree b;
    b.Insertion(5);
    b.Insertion(10);
    b.Insertion(15);
    b.Insertion(20);
    b.Insertion(25);
    b.Insertion(30);
    b.BFS();

    return 0;
}