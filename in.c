#include<stdio.h>
int main()
{
    int arr[6]={1,4,6,3,2,6};
    int i, j;
    int count=0;
    for(i=1; i<6; i++){
        j=i-1;

        int temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            arr[j]=temp;
            j=j-1;
            count++;
        }
    }
    for(i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n%d", count);
}
