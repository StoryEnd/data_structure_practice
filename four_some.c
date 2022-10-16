#include<stdio.h>
 int main()
 {
     int i, arr[100], n;
     scanf("%d", &n);
     for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
     }
     int j;
     for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
     }
    int sum=0, count=0;
    int t=n-4;
    for(i=n-1; i>=t; i--){
        int s=arr[i-1];
        count=1;
        if(s==arr[i]){
            count++;
            t--;

        }
        else{
            sum=sum+arr[i];
        }
    }
    printf("%d", sum);
 }
