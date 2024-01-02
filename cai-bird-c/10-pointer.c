#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main()
{
    int (*p)(int, int) = &max;//
    int a,b,c,d;

    printf("input three nums");

    scanf("%d %d %d",&a,&b,&c);

    d = p(p(a,b),c);

    printf("%d \n", d);
    // return 0;
}