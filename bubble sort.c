
#include<stdio.h>
int main()
{
    int arr[]={2,1,6,3,7};
    int i, j, temp, count=0;
    for(i=0; i<5; i++){
        for(j=0; j<5-i-1; j++){
            count++;
            if(arr[j]>arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", count);
}
