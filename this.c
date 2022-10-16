#include<stdio.h>
#include<string.h>
int main()
{
    char b[100];
    int n,i=0,j=0,k,count=1;
    char flag[]="DLEETX", a[100];
    //printf("%s",flag);

    printf("Enter Data : ");
    gets(a);

    while(a[i]!='\0')
    {
        if(a[i]=='D' && a[i+1]=='L' && a[i+2]=='E')
        {

            b[j]='D', b[j+1]='L', b[j+2]='E', b[j+3]='D',b[j+4]='L', b[j+5]='E';
            j=j+6;
            i=i+3;
            printf("\n%d",j);
            printf("\n%d",i);
        }
        else{
            b[j]=a[i];
            i++;
            j++;
        }
        count++;

    }
    b[j+1]='\0';
    printf("Stuffed Data :\t\t");
    printf("%s\t%s\t%s",flag,b,flag);
    //printf("%d", count);

    /*

    i=0;
    k=0;
    j=0;
    count=0;
    while(i<n)
    {
        if(b[i]==1)
        {
            a[j]=b[i];
            count++;
            for(k=i+1;b[k]==1 && k<=n && count<5 ; k++)
            {
                j++;
                a[j]=b[k];
                count++;
                if(count==5)
                {
                    k++;
                    count=0;

                }
                i=k;
            }
        }
        else{
            a[j]=b[i];
            count=0;
        }
        i++;
        j++;
    }


    printf("\nDestuffed Data :\t");
    printf("%d\t",flag);
    for(i=0;i<=j;i++)
    {
        printf("%d",a[i]);
    }
    printf("\t\t%d",flag);
    */

}
