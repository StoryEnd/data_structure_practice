#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;


};
int main()
{
    int arr[]={3,5,67,7,1};
    struct Node *head=NULL, *temp=NULL, *current=NULL, *c=NULL, *b=NULL;
    int i;
    for(i=0; i<5; i++){
        temp=malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            current=temp;
            c=temp;
            b=temp;
        }
        else{
            current->next=temp;
            current=current->next;
        }
    }
    while(head!=NULL){
        printf("%d->", head->data);
        head=head->next;
    }

    printf("NULL");
    printf("\nAdd Middle Position\n");
    int data1, count=0, position1;
    printf("Enter You position Where you want to add:");
    scanf("%d", &position1);
    printf("\nEnter Data Which you want to add: ");
    scanf("%d", &data1);
    struct Node *newTemp=NULL, *hello=c, *tem=NULL;
    while(hello!=NULL){
        count++;
        if(count==position1){
            newTemp=malloc(sizeof(struct Node));
            newTemp->data=data1;
            newTemp->next=hello->next;
            hello->next=newTemp;
        }


            hello=hello->next;
    }

    while(c!=NULL){
        printf("%d->", c->data);
        c=c->next;
    }
    printf("NULL");



printf("\n");
printf("Delete First Position: ");
printf("\n");

struct Node *newThis=NULL, *pr=NULL;
newThis=b;
//pr->next=NULL;
/*while(newThis->next!=NULL){
   // printf("%d->", newThis->data);
    //newThis=newThis->next;
    pr=newThis;
    newThis=newThis->next;
}
    pr->next=NULL;
while(b!=NULL){
    printf("%d->", b->data);
    b=b->next;
}*/




}
/*struct Node *delete(struct Node *head, int data){

    struct Node *newHead=NULL, *temp=NULL;

    newHead=head->data

};*/

/*void insert_middle(struct Node *head)
{
    int position,x;
    printf("Enter position to insert data:");
    scanf("%d", &position);
    struct Node *cur, *temp;



        cur = head;
        for(x=2; x<position; x++)
        {
            cur = cur->next;
            if(cur==NULL)
            {
                printf("Invalid position!!\n");
                return;
            }
        }
        temp = (struct Node*)malloc(sizeof(struct Node));
        if(temp==NULL)
        {
            printf("Node creation not possible!!");
            exit(0);
        }
        else
        {
            printf("Enter data to insert:");
            scanf("%d", &x);
            temp->data = x;
            temp->next = cur->next;
            cur->next = temp;
        }

}*/


