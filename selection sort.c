#include<stdio.h>
int selection_sort(int arr[], int n){
    int i, j, temp, index_min;
    for(i=0; i<n; i++){
        index_min=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[index_min]){
                index_min=j;
            }

        }
        if(index_min!=i){
            temp=arr[i];
            arr[i]=arr[index_min];
            arr[index_min]=temp;
        }
    }

}
int main()
{
    int n, i;
   /* scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);*/

   int arr[]={1,4,8,3,2,0,7,9};
   int result=selection_sort(arr, 8);
   for(i=0; i<8; i++){
    printf("%d ", arr[i]);
   }
}
