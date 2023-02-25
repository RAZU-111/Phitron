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
    node *allNode[6];
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
    void print_Tree_info()
    {
        for (int i = 0; i < 6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if (allNode[i]->Parent != NULL)
            {
                p = allNode[i]->Parent->id;
            }
            if (allNode[i]->Left != NULL)
            {
                l = allNode[i]->Left->id;
            }
            if (allNode[i]->right != NULL)
            {
                r = allNode[i]->right->id;
            }
            cout << "Node" << i << ": Parent " << p << ", Left Child " << l << ", Right Child " << r << "\n";
        }
    };
};

int main()
{
    BinaryTree b;
    b.Bulid_Binary_Tree();
    b.print_Tree_info();
    return 0;
}