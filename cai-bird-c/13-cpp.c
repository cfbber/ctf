#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


#define MAX_AGE 20;

#define message_prin(a,b) \
    printf(#a " and " #b ": wec love you\n");

#define toks(n) printf("token" #n " = %d \n",token##n)

#define MAX(x,y)((x) > (y) ? (x):(y))

int fibonaci(int n);
double average(int num, ...);

int main()
{
    printf("File %s \n", __FILE__);
    printf("DATE %s \n", __DATE__);
    printf("TIME %s \n", __TIME__);
    printf("liNE %d \n", __LINE__);
    printf("ANSI %d C\n", __STDC__);

    message_prin(MAX_AGE, "hello");

    int token34 = 40;

    toks(34);
    printf("max: %d \n", MAX(3, 5));

    int i = 17, b = 5;
    double mean;

    mean = i / b;
    printf("-- %f \n", mean);
    mean = (double)i / b;
    printf("-- %f \n", mean);

    puts("recursion.........");



    int d = fibonaci(3);
    printf("%d..", d);

    printf("%d..", fibonaci(9));


    // exit(EXIT_SUCCESS);
    puts("args");

    printf("average %f",average(3,1,2,3));
}

/**
 * 递归
*/
int fibonaci(int n) {
    if (n <= 1)
    {
        return n;
    }

    return fibonaci(n - 1) + fibonaci(n - 2);
}

// 可变参数
double average(int num, ...) {
    va_list list;

    double sum = 0;

    va_start(list, num);//初始化

    for (int i = 0; i < num; i++)
    {
        sum += va_arg(list, int);
    }

    va_end(list);

    printf(" %d sum..",sum);
    return sum/num;
}