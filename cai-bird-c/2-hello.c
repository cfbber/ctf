#include <stdio.h>

int main(){
    // printf("hjel");
    
    int a = 21;
    int b =10;
    int c;

    printf("a+b %d\n",a+b);
    printf("a-b %d\n",a-b);
    printf("a*b %d\n",a*b);
    printf("a/b %d\n",a/b);
    printf("a % b %d\n",a%b);

    if (0) // 0 视为false，其余为true
    {
        printf("--");
    }
    if (1)
    {
        printf("x--");
    }

    int* ptr;
    ptr = &a;//取a的内存地址
    printf("ptr.. %d\n",ptr);
    printf("ptr.. %d\n",*ptr);// *取指针指的值

}
