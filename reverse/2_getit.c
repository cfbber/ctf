#include <stdio.h>


int main()
{
    int a = 3;
    unsigned int b = 3;

    int res = 3 -3 ;
    printf("%d",res);

       //51966,8, 7
    unsigned int hash = 51966 * 31337 +8 * 11 + 7 - 1615810207;

    printf("Get your key: ");
    printf("%x\n", hash);
}