#include<stdio.h>
struct Node{
    int data;
    struct Node *next;

};
int main(){
    int n, i;
    scanf("%d", &n);
    struct Node *head=NULL, *temp=NULL, *current=NULL;
    int data;
    scanf("%d", &data);
    head=malloc(sizeof(struct Node));
    head->data=data;
    head->next=NULL;
    current=head;

    for(i=2; i<=n; i++){
        temp=malloc(sizeof(struct Node));
        scanf("%d", &data);
        //current->next=data;
        temp->data=data;
        temp->next=NULL;
        //current=temp;
        //temp=temp->next;
        current->next=temp;
        current=current->next;

    }
    while(head!=NULL){
        printf("%d->", head->data);
        head=head->next;
    }
    printf("NULL");

}
