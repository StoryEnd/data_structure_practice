

#include<stdio.h>
int binary_search(int arr[], int n, int x){

    int left=0, right=n-1, mid;

    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
}
int main()
{
    int arr[]={2,3,5,7,9};
    int result=binary_search(arr, 7, 6);
    printf("%d", result);
}
