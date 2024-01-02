#include <stdio.h>


int main()
{
    int a = 3;
    printf("%d \n", a);
    // return 0;
    double ba[5] = {3,1,3,4,5.1};

    int n[10];
    int i,j;

    for ( i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }
    for ( j = 0; j < 10; j++)
    {
        printf("%d\n",n[j]);
    }
    
    int si = sizeof(n)/sizeof(n[0]);
    printf("数组长度:%d\n" ,si);
    // 中文乱码，vscode，设置 gb2312

}

