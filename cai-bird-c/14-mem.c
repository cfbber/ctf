#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int nums, char* args[])
{
    char name[100];
    strcpy(name, "hello world");

    char* des;
    des = malloc(20000000000000 * sizeof(char));

    if (des == NULL)
    {
        fprintf(stderr, "erro..........\n");
    }
    else {
        strcpy(des, "whosyourdaddy");
    }

    printf("%s \n", name);
    printf("%s \n", des);
    free(des);

    printf("ars. . nums : %d \n", nums); //自动传入
    printf("ars. . args[0] : %s \n", args[0]);//程序路径
    printf("ars. . args[1] : %s \n", args[1]);// 参数1
    printf("ars. . args[2] : %s \n", args[2]);
}