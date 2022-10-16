#include<stdio.h>
int Merge_sort(int arr[], int left, int right){

    if(left<right){
       int mid=(left+right)/2;
        Merge_sort(arr, left, mid);
        Merge_sort(arr, mid+1, right);
        merge_sort(arr, left, mid, right);
    }
}

merge_sort(int arr[], int left, int mid, int right ){

    int n1=mid-left+1;
    int n2=right-mid;
        int k=left;
        int arr1[n1], arr2[n2];
    int i,j;
    for(i=0; i<n1; i++){

            arr1[i]=arr[left+i];

    }
    for(j=0; j<n2; j++){
        arr2[j]=arr[mid+1+j];
    }
    i=0, j=0;
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
int main()
{
    int arr[100];
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    //int low=0, high=n-1;
    Merge_sort(arr, 0, n-1);
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}
