#include<stdio.h>
int main()
{
    int insert,arr[100], i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter Value which you want to delete: ");
    scanf("%d", &insert);
    printf("Which Position where you want to add:");
    int h;
    scanf("%d", &h);
    for(i=n-1; i>=h; i--){
            arr[i+1]=arr[i];
    }
    arr[i+1]=insert;
    for(i=0; i<n+1; i++){
        printf("%d ", arr[i]);
    }


}

