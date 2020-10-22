#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int s= *a+*b;
    int diff=*a-*b;
    if (diff<0)
    {
        *a=s;
        *b=diff*(-1);
    }
    else
    {*a=s;*b=diff;}   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
