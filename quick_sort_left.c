#include<stdio.h>
int QuickSort(int arr[], int low, int high){

    if(low<high){
        int pi=partition(arr, low, high);
        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);

    }
}


int partition(int arr[], int low, int high){

    int pivot, right;
    pivot=arr[low];
    int i=low+1, j=high;
    while(i<=j){
        while(arr[i]<pivot){
                i++;

        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<=j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    arr[low]=arr[j];
    arr[j]=pivot;
   // arr[j]=temp;
    return j;


}
int main()
{
    int arr[100];
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    //int low=0, high=n-1;
    QuickSort(arr, 0, n-1);
    for(i=0; i<n; i++){
        printf("%d ", arr[i] );
    }

}
