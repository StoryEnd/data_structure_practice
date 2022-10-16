#include<stdio.h>
int main()
{
    int i, j, count=0;;
    int arr[]={2,1,6,3,7,5, 8,7,122,4,66,22};
    for(i=0; i<12; i++){
        for(j=i+1; j<12; j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
    }
    for(i=0; i<12; i++){
        printf("%d ", arr[i]);

    }
    printf("%d", count);
}
