#include <stdio.h>

int y;
#define PI 3.1415926
static int count=10;
int add()
{
    // 只声明，不初始化，链接器将在链接阶段解析这个引用
    extern int y;
    y = 3;
    return y;
}

int main()
{
    int x;
    x = 20;
    int res;
    res = add();

    printf("-- %d", res);
    printf("%d",PI);

    const int var = 10;

    while (count--)
    {
        fun1();
        /* code */
    }
    
}
void fun1(){
    static int thinx =5;
    thinx++;

    printf("%d,%d\n",thinx,count);

}