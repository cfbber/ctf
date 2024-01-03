#include <stdio.h>
#include <stdlib.h>

int maxx(int x, int y) {
    return x > y ? x : y;
}
int getRandom() {
    return rand();
}

/**
 * int (*fun)(void)，函数签名，返回值，入参
 * 数组作为参数时，可使用 int * array,
*/
void setArray(int array[], size_t arraySize, int (*fun)(void)) {
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = fun();
    }

}

int main()
{
    int (*p)(int, int) = &maxx;//
    int a, b, c, d;

    printf("input three nums");

    scanf("%d %d %d", &a, &b, &c);

    d = p(p(a, b), c);

    printf("%d \n", d);
    // return 0;

    int arrayp[10];

    setArray(arrayp, 10, getRandom);//回调函数

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arrayp[i]);
    }


}