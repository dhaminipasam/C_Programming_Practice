#include <stdio.h>

struct tnode
{
    int data;
    struct tnode *right;
    struct tnode *left;
};



struct tnode *CreateBST(struct tnode *root, int item)
{
    if(root == NULL)
    {
        root = (struct tnode *)malloc(sizeof(struct tnode));
        root->left = root->right = NULL;
        root->data = item;
        return root;
    }
    else
    {
        if(item < root->data )
            root->left = CreateBST(root->left,item);
        else if(item > root->data )
            root->right = CreateBST(root->right,item);
        else
            printf(" Duplicate Element !! Not Allowed !!!");

        return(root);
    }
}

void Inorder(struct tnode *root)
{
    if( root != NULL)
    {
        Inorder(root->left);
        printf(" %d ",root->data);
        Inorder(root->right);
    }
}
int main()
{
    struct tnode *root = NULL;
    int choice, item, n, i;
	
    printf("\n\nBST for How Many Nodes ? ");
    scanf("%d",&n);
	for(i = 1; i <= n; i++)
    {
    printf("\nEnter data for node %d : ", i);
    scanf("%d",&item);
    root = CreateBST(root,item);
    }