#include<stdio.h>
#include<stdlib.h>
FILE *fp, *tmp;

struct Node{
    int id;
    char name[20];
    char address[20];
    char par_name[20];
    int batch;
    double phoneNum;
    struct Node *next;
}student,*head, *curr, *curr;

int add_student(){
    struct Node *n_node;
    n_node=(struct Node *)malloc(sizeof(struct Node));
    printf("\t\t\t\t\tEnter Id  No:");
    scanf("%d", &n_node->id);

    fp = fopen("data.txt","rb");
    int i=0, count=0;
    while(fread(&student, sizeof(student), 1, fp)==1){
        i++;
        if(student.id==n_node->id){
            count=1;
            break;
        }
    }
    if(count==1){
        printf("\t\t\t\t\tThis is already exist\n");

    }
    else{
          printf("\n\t\t\t\t\tEnter Student Name: ");
    fflush(stdin);
    gets(n_node->name);
    fflush(stdin);
    printf("\n\t\t\t\t\tEnter Student Adress: ");
    gets(n_node->address);

    fflush(stdin);
    printf("\n\t\t\t\t\tEnter Parents Name: ");
    gets(n_node->par_name);
    fflush(stdin);
    printf("\n\t\t\t\t\tEnter Batch No: ");
    scanf("%d", &n_node->batch);
    printf("\n\t\t\t\t\tEnter Mobile No: ");
    scanf("%lf", &n_node->phoneNum);
    n_node->next=NULL;
    if(head==NULL){
        head=n_node;
        curr=n_node;

    }
    else{
        curr->next=n_node;
        curr=n_node;
    }
    fp=fopen("data.txt", "ab+");
    fwrite(&curr, sizeof(curr), 1, fp);
    fclose(fp);
    }


}
int main()
{
    int i,j,choice;
    printf("\t\t\t\t\t\tMenu\n\n");
    printf("\t\t\t\t\t1. Add Student\n");
    printf("\t\t\t\t\t2. Search Student\n");
    printf("\t\t\t\t\t3. Modify Student Record\n");
    printf("\t\t\t\t\t4. Generate Marksheet\n");
    printf("\t\t\t\t\t5. Delete Student Record\n");
    printf("\t\t\t\t\t6. Change password\n");
    printf("\t\t\t\t\t7. Exit\n\n");
    printf("\t\t\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add_student();
        break;
    case 2:
       // search_student();
        break;
    case 3:
       // mod_student();
        break;
    case 4:
        break;
    case 5:
        //delete_student();
        break;
    case 6:
        break;
    case 7:
        exit(0);
        break;
    default:
        break;
    }
}

