class node
{
    private:
        int data;
        class node * left;
        class node * right;
    public:
        node(node &tree,int val)
        {
            tree.data=val;
            tree.left= NULL;
            tree.right=NULL;
        }
        node * insert(node &tree,int val)
        {
            node &prePtr, &ptr;
            if(tree.data==NULL)
                node(tree,val);
            while(tree.left!=NULL)
        }
};