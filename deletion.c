#include<stdio.h>
int main()
{
    int delete, n, i,j, arr[100];
    scanf("%d", &n);
    for(i=0; i<n; i++){

        scanf("%d", &arr[i]);
    }
    int position;
    printf("Enter Where position you want to delete: ");
    scanf("%d", &delete);
    int hello=delete;
    for(i=delete; i<n; i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
