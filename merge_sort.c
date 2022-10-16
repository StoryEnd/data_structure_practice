#include<stdio.h>

int merge_sort(int arr[], int low, int mid, int right){

    int n1, n2;
    n1=mid-low+1, n2=right-mid;
    int i=0, j=0,k=low,arr1[n1], arr2[n2];
    for(i=0; i<n1; i++){
        arr1[i]=arr[low+i];
    }
    for(j=0; j<n2; j++){
        arr2[j]=arr[mid+j+1];
    }


    i=0; j=0;
    while(i<n1 && j<n2){

                if(arr1[i]<arr2[j]){
                    arr[k]=arr1[i];
                    i++;
                    k++;
                }
                else{
                    arr[k]=arr2[j];
                    j++;
                    k++;
                }


            }
        while(i<n1){
            arr[k]=arr1[i];
            i++;
            k++;

        }
        while(j<n2){
            arr[k]=arr2[j];
            j++;
            k++;
        }



    }

int quickSort(int arr[], int low, int right){

    if(low<right){
        int mid=(low+right)/2;
        quickSort(arr, low, mid);

        quickSort(arr, mid+1, right);
        merge_sort(arr, low, mid, right);

    }
}
int main()
{
    int arr[100], n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    quickSort(arr, 0, n-1);
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
