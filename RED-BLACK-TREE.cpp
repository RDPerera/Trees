#include<iostream>
using namespace std;

enum color {RED,BLACK};

struct node
{
    bool color;
    struct node * left;
    struct node * right;
    struct node * parent;
    int data;
};

class RBTree
{
    private:
        struct node * root;
    protected:
        void rotateLeft(struct node *,struct node *);
        void rotateRight(struct node *,struct node *);
        void fixViolation(struct node *,struct node *);
    public:
        RBTree()
        {
            root=NULL;
        }
        void insert(int n);
        void inOrder();
        void levelOrder();
};

struct node * bstInsert(struct node * tree,int val)
{
    struct node * ptr=tree;
    struct node * newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=val;
    if(tree==NULL){
        return newNode;
    }
    while(ptr)
    {
        if(ptr->data > val)
        {
            ptr->right->parent=ptr;
            ptr=ptr->right;
            
        }
        else
        {
            ptr->left->parent=ptr;
            ptr=ptr->left;
        }
    }
    ptr=newNode;
    return tree;
}


int  main()
{
    RBTree t1;
    return 0;
}