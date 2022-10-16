#include<stdio.h>
int partition(int arr[], int low, int high){
    int j=low, i=low-1;
int  pivot=arr[high];
    while(j<high){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
        j++;
    }
    int temp=arr[i+1];
    arr[i+1]=pivot;
    arr[high]=temp;
    return i+1;

}
int quickSort(int arr[], int low, int high){
    int pi;
    if(low<high){
        pi=partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);

    }

}
int main()
{
    int n, arr[100];
    int i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n-1);
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
}

