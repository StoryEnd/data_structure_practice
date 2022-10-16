#include<stdio.h>

int main()
{
    int t2d[100],encode[100];
    int i,j,i1=0,j1=0;
    int key[5][5],ks;
    char s[100];
    printf("Enter key matrix size \n");
    scanf("%d",&ks);
    printf("Enter key matrix \n");
    for(i=0; i<ks; i++)
        for(j=0; j<ks; j++)
            scanf("%d",&key[i][j]);
    fflush(stdin);
    printf("Enter Message to decode\n");
    gets(s);


    i=0;
    while(s[i]!=NULL)
    {
        if(s[i]==' ')
        {
            t2d[i]=0;
        }
        else if(s[i]<'A'||s[i]>'Z')
        {
            t2d[i]=27;
        }
        else
        {
            t2d[i]=s[i]-64;
        }
        i++;
    }
    /*for(j1=0;j1<i;j1++){



    {
        printf("%d ",t2d[j1]);
        }*/
    j1=0;
    j=0;

    while(j1<i)
    {
        encode[j1]=(t2d[j]*key[0][0])+(t2d[j+1]*key[1][0]);
        j1++;
        encode[j1]=(t2d[j]*key[0][1])+(t2d[j+1]*key[1][1]);
        j1++;
        j=j+2;
    }
    for(j=0; j<i; j++)
    {
        printf("%d ",encode[j]);
    }
}

