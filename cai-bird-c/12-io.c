#include <stdio.h>


int main()
{

    float f;
    puts("input a float");
    scanf("%f", &f);
    printf("%f \n", f);

 

    puts("");

    char str[99];
    puts("input a str");
    gets(str);
    puts(str);

    int a = 3;
    printf("%d \n", a);
    // return 0;

       char c;
    puts("input a char");
    c = getchar();
    putchar(c);


    puts("input a str, int");

    scanf("%s %d",&str,&a);
    printf("%s %d",str,a);
}