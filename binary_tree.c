#include<stdio.h>
struct Node {
    int data;
    struct Node *left, *right;

};
struct Node *create(){

    int x;
    struct Node *newNode;
    newNode=malloc(sizeof(struct Node));
    printf("Enter Data for Node: ");
    scanf("%d", &x);
    if(x==-1){
        return 0;
    }
    newNode->data=x;
    printf("Enter left child: ");
    newNode->left=create();
    printf("Enter right child: ");
    newNode->right=create();
    return newNode;


};
void preorder(struct Node *root){
    if(root==0){
        return ;
    }
    printf("%d", root->data);
    preorder(root->left);
    preorder(root->right);

}
int main()
{
    struct Node *root;
    root=create();
    printf("Preorder root");
    preorder(root);
}
