#include<stdio.h>
int main()
{
    int i,j, count=0;
    //int arr[]={2,1,6,3,7,5, 8,7,122,4,66,22};
    int arr[]={5,2,1,6,7,8};
    for(i=1; i<6; i++){
        int th=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>th){
            int temp=arr[j];
            arr[j+1]=arr[j];
            arr[j]=th;

            j--;
            count++;
        }
    }
    for(i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n%d", count);
}
