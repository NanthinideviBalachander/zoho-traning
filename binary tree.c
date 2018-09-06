#include <stdlib.h>
int height=0,count=0,currvalue=0;
struct tree
{
    int val;
    struct tree *left,*right;
};
struct tree *root=NULL,*neww=NULL;
insert(struct tree *root ,struct tree *neww )
{
    if(neww->val<root->val)
    {
        if(root->left==NULL)
        {
            root->left=neww;
        }
        else
        {
            insert(root->left,neww);
        }
    }
    if(neww->val>root->val)
    {
        if(root->right==NULL)
        {
            root->right=neww;
        }
        else
        {
            insert(root->right,neww);
        }
    }
}
inorder(struct tree *root1)
{
    if(root1!= NULL)
    {

        inorder(root1->left);
        printf("%d ",root1->val);
        inorder(root1->right);

    }
}
preorder(struct tree *root1)
{
    if(root1!= NULL)
    {

        printf("%d ",root1->val);
        inorder(root1->left);
        inorder(root1->right);

    }
}
postorder(struct tree *root1)
{
    if(root1!= NULL)
    {

        inorder(root1->left);
        inorder(root1->right);
         printf("%d ",root1->val);

    }
}
void main()
{
    char letter[50];
    int asc[50];
    scanf("%s",letter);
    int len=strlen(letter)-1;
    asc[0]=(int)letter[0];
   // printf("%d",asc[0]);
    root=(struct tree*)malloc(sizeof *root);
    root->left=root->right=NULL;
    root->val=asc[0];
    for(int i=1;i<=len;i++)
    {
        asc[i]=(int)letter[i];
        neww=(struct tree*)malloc(sizeof *neww);

        neww->left=neww->right=NULL;
        neww->val=asc[i];
        //printf("%d ",asc[i]);
        //insert(root,asc[i]);
        insert(root,neww);
    }
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

}
