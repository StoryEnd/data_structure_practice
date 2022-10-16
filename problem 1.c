#include <stdio.h>

int main() {

    int x, y, a, b;
    scanf("%d %d", &x, &y);
    a=x/y;
    b=x%y;
    if(b<0){
        if(a<0)
        {
            a--;
        }
        if(a>0){
            a++;
        }
        b=x-(y*a);

    }
    printf("%d %d", a, b);

    return 0;
}
