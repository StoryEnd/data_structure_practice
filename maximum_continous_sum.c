#include<stdio.h>
int main()
{
    int max_sum=0, current_sum=0;
    int n, arr[100], i;
    scanf("%d",  &n);
    for(i=0; i<n; i++){
        scanf("%d",  &arr[i]);
    }
    for(i=0; i<n; i++){
        current_sum+=arr[i];
        if(current_sum<0){
            current_sum=0;
        }
        if(max_sum<current_sum){
            max_sum=current_sum;
        }
    }
    printf("%d", max_sum);
}
