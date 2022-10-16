#include<stdio.h>
int main()
{
    int arr[100], n, item, left=0, right, mid,i, count=0;
    scanf("%d", &n);
    right=n-1;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Which item you want to search:");
    scanf("%d", &item);
    while(left<=right){
        mid=(left+right)/2;
         if(arr[mid]==item){
            printf("%d", mid);

        }
          if(arr[mid]<item){
            left=mid+1;

        }

        else{
            right=mid-1;
        }
        count++;
    }
   /* for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }*/
    printf("%d", count);
}
