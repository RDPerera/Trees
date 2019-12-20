#include <stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    struct node *right;
    int data;
};

struct node *bst;

struct node *createTree(int val)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->left = NULL;
    tmp->right = NULL;
    tmp->data = val;
    return tmp;
}

struct node *insert(int val)
{
    if (bst == NULL)
    {
        bst = createTree(val);
    }
    else
    {
        struct node *ptr, *prePtr;
        ptr = bst;
        while (ptr != NULL)
        {
            prePtr = ptr;
            if (ptr->data < val)
                ptr = ptr->right;
            else
                ptr = ptr->left;
        }
        ptr = createTree(val);
        if (prePtr->data > val)
            prePtr->left = ptr;
        else
            prePtr->right = ptr;
        return bst;
    }
}

void display(struct node *tree)
{
    if (tree==NULL)
    {
        return;
    }
    display(tree->left);
    printf(" %d ",tree->data);
    display(tree->right);
}
struct node * search(struct node * tree,int val)
{
    if (tree==NULL)
    {
        return 0;
    }
    if (tree->data==val)
    {
        return tree;
    }
    search(tree->left,val);
    search(tree->right,val);
}
int main()
{
    bst=insert(10);
    insert(20);
    insert(30);
    display(bst);
    struct node  * add=search(bst,10);
    printf("%d",add->data);
    return 0;
}