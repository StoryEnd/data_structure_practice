#include<stdio.h>
int main()
{
    int arr[]={2,5,7,8,12,25,35,48};
    int size=sizeof(arr)/sizeof(arr[0]);
    int item;
    int left=0;
    int right=size-1;
    int mid;
    int count=0;
    scanf("%d", &item);
    mid=(left+right)/2;
    while(left<=right){

         if(arr[mid]==item){
                printf("%d", mid);

        }
        if(arr[mid]<item){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
      mid=(left+right)/2;
    }




}
