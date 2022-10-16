#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int main()
{
    int arr[]={32,5,6,1,6};
    struct Node *head=NULL, *temp=NULL, *current=NULL, *c=NULL;
    int i;
    for(i=0; i<5; i++){
        temp=malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            current=temp;
            c=temp;
        }
        else{
            current->next=temp;
            current=current->next;

        }
       // free(temp);
    }
   // free(temp);

    while(head!=NULL){
        printf("%d->", head->data);
        head=head->next;
    }
    printf("NULL");
    printf("\nAdd First item\n");
    int hello;
    struct Node *newHead=c, *tempAgain=NULL;
    scanf("%d", &hello);
    tempAgain=malloc(sizeof(struct Node));
    tempAgain->data=hello;
    tempAgain->next=c;
    newHead=tempAgain;

    c=newHead;
    //free(newHead);
    while(newHead!=NULL){
        printf("%d->", newHead->data);
        newHead=newHead->next;

    }
    //free(tempAgain);
    printf("NULL");

    printf("\nAdd last item\n");
    struct Node *newTemp=NULL, *create=c;

    while(create->next!=NULL){
        create=create->next;
    }

   int data;
    scanf("%d",&data);
    newTemp=malloc(sizeof(struct Node));


    newTemp->data=data;
    newTemp->next=NULL;
    create->next=newTemp;

    while(c!=NULL){
        printf("%d->",c->data );
        c=c->next;
    }
    printf("NULL");


}
