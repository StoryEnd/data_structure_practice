
#include<stdio.h>
int main()
{
    int arr[]={7,2,7,5,2,3};
    int i, j, max ;
    max=arr[0];
    for(i=1; i<6; i++){
        if(max<=arr[i]){
            int temp=max;
            max=arr[i];
            arr[i]=max;

            }

    }
    int count[max+1];
    for(i=0; i<max+1; i++){
        count[i]=0;
    }
    for(i=0; i<6; i++){
        count[arr[i]]++;
    }
    for(i=0; i<max+1; i++){
        printf("%d ", count[i]);
    }
    for(i=1; i<max+1; i++){
        count[i]=count[i]+count[i-1];
    }
    printf("\n");
    for(i=0; i<max+1; i++){
        printf("%d ", count[i]);
    }







}
