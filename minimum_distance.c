#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int arr[100];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    int i,j=0;
        int min=10000;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==x && arr[j]==y){
                if(min>j-i){
                    min=j-i;
                }
            }
        }
    }
    printf("%d", min);
}
