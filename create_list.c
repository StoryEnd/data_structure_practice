#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *head, *temp, *current;
int main()
{
    int n, i;
    printf("Enter Node Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i==1){
            temp=(struct Node *)malloc(sizeof(struct Node));
            scanf("%d", &temp->data);
            temp->next=NULL;
            head=temp;
            current=temp;
        }
        else{
            temp=(struct Node *)malloc(sizeof(struct Node));
            scanf("%d", &temp->data);
            temp->next=NULL;
            current->next=temp;
            current=current->next;
        }
    }

    insert_with_sorted();
    struct Node *c=head;


}

int insert_with_sorted(){
    struct Node *c;
    printf("\nEnter New Data: ");
    int item;
    scanf("%d", &item);

    c=head;


    struct Node *prev;
    if(head==NULL || item<head->data){
        temp=malloc(sizeof(struct Node));
        temp->data=item;
        temp->next= head;
        head=temp;
    }
    else{
        c=head;


    while(c!=NULL && c->data<item){
        prev=c;
        c=c->next;
    }

    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=item;
    prev->next= temp;
    temp->next= c;
    c=head;
    }
    c=head;
    while(c!=NULL){
        printf("%d->", c->data);
        c=c->next;
    }
    printf("NULL\n");
    char x;
    fflush(stdin);
    printf("\nDo You want to another Data: ");
    scanf("%c", &x);
    fflush(stdin);
    if(x=='Y' || x=='y'){
        insert_with_sorted();
    }
    else{
        return 0;
    }


}
