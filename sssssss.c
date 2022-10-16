#include <stdio.h>
int main()
{
    int i,j,k,order;
    float M[20][20],r,p[100000],sum=0.0;
    printf("\n");
    printf("\tEnter the order of matrix: ");
    scanf("%d",&order);
    printf("\n");
    printf("\tPut(row-wise)the elements of augmented matrix:\n");
    printf("\n");
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=(order+1); j++)
        {
            printf("\tM[%d][%d] = ",i,j);
            scanf("%f",&M[i][j]);
        }
    }
    printf("\n");

    printf("\tInputed matrix is: \n\n");
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order+1; j++)
        {
            printf("\t%.f",M[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(j=1; j<=order; j++)
    {
        for(i=1; i<=order; i++)
        {
            if(i>j)
            {
                r=M[i][j]/M[j][j];
                for(k=1; k<=order+1; k++)


                {
                    M[i][k]=M[i][k]-r*M[j][k];
                }
            }
        }

    }
    p[order]=M[order][order+1]/M[order][order];
    for(i=order-1; i>=1; i--)
    {
        sum=0.0;
        for(j=i+1; j<=order; j++)
        {
            sum=sum+M[i][j]*p[j];
        }
        p[i]=(M[i][order+1]-sum)/M[i][i];
    }
    printf("\n");
    printf("\n\tThe solution is: \n");
    printf("\n\ta0 = %.2f",p[1]);
    printf("\n\ta1 = %.2f",p[2]);
    printf("\n\ta2 = %.2f",p[3]);
    printf("\n");
}
