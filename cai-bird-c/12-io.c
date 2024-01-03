#include <stdio.h>

void read();
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

    scanf("%s %d", &str, &a);
    printf("%s %d", str, a);

    read();
}

void read() {

    puts("-----------read-----------");

    FILE* fp = NULL;
    char buff[255];

    fp = fopen("C:\\workspace\\ctf\\cai-bird-c\\0-t.c", "r");
    fscanf(fp, "%s", buff); // 遇空格则停
    printf("1: %s \n", buff);

    fgets(buff, 255, fp); // 遇换行停
    printf("2: %s \n", buff);

    fgets(buff, 255, fp);
    printf("3: %s \n", buff);

    fgets(buff, 255, fp);
    printf("4: %s \n", buff);

    fgets(buff, 255, fp);
    printf("5: %s \n", buff);

    fclose(fp);
}