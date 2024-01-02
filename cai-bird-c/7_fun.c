#include <stdio.h>

int max(int a, int b);
int c = 10;
int main() {
    int ret;
    ret = max(3, 5);
    printf("xx %d \n", ret);

    int c = 3;
    printf(" %d \n ",c);
    int* ptr = &c;
    printf("%p",(void*)ptr);
    
}

int max(int a, int b)
{
    return a > b ? a : b;
}


/**
 * printf("格式", 参数列表)
 * %d，10进制数字
 * %x,hex
 * %f,float
 * %e，科学计数法
 * %c，字符
 * %s,字符串
 * %p，hex格式的指针地址
 * 
*/
/*
scanf("格式",args);
%u：unsigned int

*/