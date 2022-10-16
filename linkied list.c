#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

}*node_data;
int main()
{

    int n,i,x; struct Node *temp=NULL, *current=NULL, *head=NULL;

    head= (struct Node *)malloc(sizeof(struct Node));
    int c;
temp=(struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &n);
   // scanf("%d", &c);
   // head->data=c;
   // head->next=NULL;
    //temp=head;
    struct node *d;
    d=(struct Node*)malloc(sizeof(struct Node));
    for(i=1; i<=n; i++){
        current=(struct Node *)malloc(sizeof(struct Node));

        scanf("%d",&x );
        head->data=x;
        head->next=NULL;
        current->data=x;
        current->next=NULL;

        temp->next=current;
        temp=temp->next;

    }


    //temp=head;
    while(head!=NULL){

        printf("%d -> ", head->data);
        head=head->next;
    }
    printf("NULL");
}
