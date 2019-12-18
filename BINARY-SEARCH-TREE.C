#include <stdio.h>

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
        ptr = reateTree(val);
        if (prePtr->data > val)
            prePtr->left = ptr;
        else
            prePtr->right = ptr;
        return bst;
    }
}

void display(struct node *tree)
{
    if (tree=NULL)
    {
        return;
    }
    display(tree->left);
    printf(" %d ",tree->data);
    display(tree->right);
}
int main()
{
    bst=insert(10);
    
    return 0;
}