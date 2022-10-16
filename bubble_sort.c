#include<stdio.h>
int bubble_sort(int arr[], int n){
    int i, j, temp, count=0;

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            count++;
            if(arr[j]>arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return count;
}
int main()

{
    int i;
    int arr[]={2,1,6,3,7,5, 8,7,122,4,66,22};
    bubble_sort(arr, 12);
    for(i=0; i<12; i++){
            printf("%d ", arr[i]);
    }
    printf("\n");
    int result=bubble_sort(arr, 12);
    printf("%d", result);
}
