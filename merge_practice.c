#include<stdio.h>
void marge_sort(int arr[],int lb, int ub)
{
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        marge_sort(arr,lb,mid);
        marge_sort(arr,mid+1,ub);
        marge(arr,lb,mid,ub);
    }
}
int marge(int arr[],int lb,int mid,int ub)
{
    int n1=mid-lb+1;
    int n2=ub-mid;
    int i,j,k=lb,arr1[n1],arr2[n2];
    for(i=0;i<n1;i++){
        arr1[i]=arr[lb+i];
    }
    for(j=0;j<n2;j++){
        arr2[j]=arr[mid+1+j];
    }
    i=0;j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
                arr[k]=arr1[i];
            i++;
        }
        if(arr1[i]>arr2[j]){
            arr[k]=arr2[j];
            j++;
        }
        k++;
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
    int arr[10],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    marge_sort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
