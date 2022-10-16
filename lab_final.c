#include<stdio.h>
int main()
{
    int n, max1, max2, data;
    scanf("%d", &n);
    scanf("%d", &max1);
    scanf("%d", &max2);
    int i;
    for(i=2; i<n; i++){
        scanf("%d", &data);
        if(max1<max2){
            int tmp=max1;
            max1=max2;
            max2=tmp;
        }
        if(max1<=data){
            max1=data;
        }
        else if(max1>=data && max2<=data){
                max2=data;

        }
    }
    printf("%d", max2);
}
