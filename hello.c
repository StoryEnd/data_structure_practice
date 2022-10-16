
#include<stdio.h>

int selection_sort(int arr[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        temp=arr[i];
        for(j=i+1; j<n; j++){
            if(arr[j]<temp){
                int h=arr[i];
                arr[i]=arr[j];
                arr[j]=h;
            }
        }
    }
}
int main()
{
    int arr[100], n, i;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter Targeted Value: ");
    selection_sort(arr, n);
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


}

