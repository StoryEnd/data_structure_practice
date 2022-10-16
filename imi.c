#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
struct node *head, *temp, *prev, *cur;
void main()
{
    int size,choice;
    printf("Enter node amount:");
    scanf("%d", &size);
    build_list(size);
    while(1)
    {
        printf("\n\nEnter your choice:\n\t 0. visit\n\t 1. Insert at first \n\t 2. Insert at last \n\t 3. Insert middle\n\t 4. Delete first \n\t 5. Delete last \n\t 6. Delete by position \n\t 7. Delete by key \n\t 8. Search \n\t 9. Sort\n\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 0:
            visit();
            break;
        case 1:
            insert_first();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            insert_middle();
            break;
        case 4:
            delete_first();
            break;
        case 5:
            delete_last();
            break;
        case 6:
            delete_by_position();
            break;
        case 7:
            delete_by_key();
            break;
        case 8:
            search();
            break;
        case 9:
            sort();
            break;
        }
    }
}

void delete_first()
{
    if(head==NULL)
    {
        printf("No node to delete!!");
        return;
    }

    temp = head;
    int x = temp->data;
    head = head->next;
    printf("%d is deleted.\n", x);
    free(temp);
    visit();
}

void delete_last()
{

    if(head==NULL)
    {
        printf("No node to delete!!");
        return;
    }

    temp = head;
    prev = head;
    if(temp->next==NULL)
    {
        delete_first();
        return;
    }
    while(temp->next!=NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    printf("%d is deleted.\n", temp->data);
    free(temp);
    visit();

}

void  delete_by_position()
{
    int position;
    printf("Enter the position:");
    scanf("%d", &position);
    temp = head;
    int x=1;
    while(x<position)
    {
        prev = temp;
        temp = temp->next;
        x++;
        if(temp==NULL)
        {
            printf("Invalid position!!\n");
            return;
        }
    }
    prev->next = temp->next;
    printf("%d is deleted\n", temp->data);
    free(temp);
    visit();
}

void  delete_by_key()
{
    int data;
    printf("Enter data to delete:");
    scanf("%d", &data);
    prev = NULL;
    temp = head;
    if(temp==NULL)
    {
        printf("No data to delete!!");
        return;
    }
    else
    {
        while(temp!=NULL)
        {

            if(temp->data == data)
            {
                if(prev==NULL)
                {
                    cur = temp;
                    head = head->next;
                    free(cur);
                    temp = head;
                    prev = NULL;
                }
                else
                {
                    prev->next = temp->next;
                    cur = temp;
                    free(cur);
                    temp = prev->next;
                }
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }

        }
        visit();
    }
}

void search()
{
    int item,count=0,position=1;
    printf("Enter the item to search:");
    scanf("%d", &item);
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data==item)
        {
            count++;
            printf("%d found in position: %d\n", item, position);
        }
        position++;
        temp = temp->next;
    }
    if(count==0)
        printf("ITEM NOT FOUND!!\n");
    else
    {
        printf("%d found total: %d times.\n", item, count);
    }

}

void sort()
{

    if(head==NULL)
    {
        printf("No data to sort!\n");
        return;
    }
    else
    {
        temp=head;
        int node_count=0,x=0,y=0;

        while(temp!=NULL)
        {

            node_count++;
            temp = temp->next;
        }

        int bubble_up = node_count-1;
        int inner_loop_controller = 0;

        while(bubble_up)
        {
            cur = head;
            temp= cur->next;
            inner_loop_controller = 0;
            while((bubble_up - inner_loop_controller)!=0)
            {
                if(temp->data < cur->data)
                {
                    int t = temp->data;
                    temp->data = cur->data;
                    cur->data = t;
                }
                temp= temp->next;
                cur = cur->next;
                inner_loop_controller++;
            }
            bubble_up--;
        }
    }
    visit();
}

void insert_first()
{
    int x;
    printf("Enter data to insert:");
    scanf("%d", &x);
    temp = (struct node*) malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Node creation not possible!!");
        exit(0);
    }
    else
    {
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    visit();
}
void insert_last()
{
    int x;
    if(head==NULL)
    {
        insert_first();
    }
    else
    {
        cur = head;
        while(cur->next!=NULL)
        {
            cur= cur->next;
        }
        temp = (struct node*)malloc(sizeof(struct node));
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
            cur->next = temp;
            temp->next = NULL;
        }
    }
    visit();
}
void insert_middle()
{
    int position,x;
    printf("Enter position to insert data:");
    scanf("%d", &position);

    if(head==NULL)
    {
        insert_first();
    }
    else
    {
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
        temp = (struct node*)malloc(sizeof(struct node));
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
    }
    visit();
}
void visit()
{
    printf("\n\nCurrent Status:\n");
    temp = head;
    if(head==NULL)
    {
        printf("No data to show!!");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

void build_list(int size)
{
    int node_count=1,d;
    while(node_count<=size)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        if(temp==NULL)
        {
            printf("Node creation not possible!!");
            exit(0);
        }
        else
        {
            printf("Enter data for node %d:", node_count);
            scanf("%d", &d);
            if(node_count==1)
            {
                temp->data =d;
                temp->next=NULL;
                head = temp;
                prev = head;
            }
            else
            {
                prev->next = temp;
                temp->data =d;
                temp->next=NULL;
                prev = prev->next;
            }
        }
        node_count++;
    }
}
