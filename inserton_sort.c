#include<stdio.h>
int insertion_sort(int arr[], int n){
    int i, j, temp, count=0;
    for(i=1; i<n; i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
            count++;
        }
        arr[j+1]=temp;

    }
    printf("%d\n", count);
}
int main()
{
    int arr[100];
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
}
