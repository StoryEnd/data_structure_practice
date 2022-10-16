#include<stdio.h>
 int quick_sort(int arr[],int lb,int ub)
 {
     if(lb<ub){
     int p_i=partition(arr,lb,ub);
     quick_sort(arr,lb,p_i-1);
     quick_sort(arr,p_i+1,ub);
     }
 }
 int partition(int arr[],int lb,int ub)
 {
     int i=lb;
     int j=ub;
     int pivot=lb;
        while(i<j){
        while(arr[i]<=arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }

        }


        int temp=arr[j];
        arr[j]=arr[pivot];
        arr[pivot]=temp;
        return j;
 }
 int main()
 {
     int arr[10],i,n;
     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     quick_sort(arr,0,n-1);
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
 }
