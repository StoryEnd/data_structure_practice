#include<stdio.h>
int main()
{
    int n, max1, max2, i, j;
    int arr[100];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    max1=arr[0];
    max2=arr[1];
    if(max1<max2){
        int temp=max1;
        max1=max2;
        max2=temp;
    }
    for(i=2; i<n; i++){
        if(max1<arr[i]){
            int temp=max1;
            max1=arr[i];
            max2=temp;
        }
        else if(max2<arr[i] && max1!=arr[i]){
            max2=arr[i];
        }
    }
    printf("%d", max1);
    printf("\n%d", max2);
}
