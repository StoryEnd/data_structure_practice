#include <stdio.h>
int main()
{
int i,j,k,n;
float M[20][20],r,p[100000],sum=0.0;
printf("\n");
printf("Enter the order of matrix: ");
scanf("%d",&n);
printf("\n");
printf("Put(row-wise)the elements of augmented matrix:");
printf("\n");
for(i=1; i<=n; i++)
{
for(j=1; j<=(n+1); j++)
{
scanf("%f",&M[i][j]);
}
}
printf("\n");

printf("Inputed matrix is: \n");
for(i=1; i<=n; i++)
{
for(j=1; j<=n+1; j++)
{
printf("%.f",M[i][j]);
printf("\t");
}
printf("\n");
}
for(j=1; j<=n; j++)
{
for(i=1; i<=n; i++)
{
if(i>j)
{
r=M[i][j]/M[j][j];
for(k=1; k<=n+1; k++)


{
M[i][k]=M[i][k]-r*M[j][k];
}
}
}

}
p[n]=M[n][n+1]/M[n][n];
for(i=n-1; i>=1; i--)
{
sum=0.0;
for(j=i+1; j<=n; j++)
{
sum=sum+M[i][j]*p[j];
}
p[i]=(M[i][n+1]-sum)/M[i][i];
}
printf("\n");
printf("\nThe solution is: \n");
printf("\na0= %f ",p[1]);
printf("\na1= %f",p[2]);
printf("\na2= %f ",p[3]);
}
