#include<stdio.h>
int main()
{
    int n;
    int arr[100], i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    int sum=0;
    int j, k;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            sum=sum+arr[j];
            if(sum==0){
                    printf("%d %d \n", i,j);
                }
            }
        }

}
