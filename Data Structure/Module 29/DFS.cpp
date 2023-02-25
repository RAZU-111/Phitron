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
    void Bulid_Binary_Tree()
    {
        node *allNode[6];

        for (int i = 0; i < 6; i++)

            allNode[i] = createNewNode(i);

        allNode[0]->Left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->Left = allNode[5];
        allNode[1]->Parent = allNode[0];

        allNode[2]->Left = allNode[3];
        allNode[2]->right = allNode[4];
        allNode[2]->Parent = allNode[0];

        allNode[5]->Parent = allNode[1];

        allNode[3]->Parent = allNode[2];
        allNode[4]->Parent = allNode[2];

        root = allNode[0];
    }

    void BFS()
    {
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
    b.Bulid_Binary_Tree();
    // b.BFS();

    b.DFS(b.root);
    cout << endl;
    b.Inorder(b.root);
    cout << "Inorder " << endl;

    b.preorder(b.root);
    cout << "preorder " << endl;

    b.postorder(b.root);
    cout << "postorder " << endl;
    return 0;
}