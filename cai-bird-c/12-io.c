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

void f3(){
    // int fputc(int character, FILE *stream);
    // 将字符写入指定的文件
    //int fprintf(FILE *stream, const char *format, ...);
    // 用于将按指定格式写入文件

    // int fseek(FILE *stream, long int offset, int origin);
    // 设置文件位置指示器，在文件中定位到指定位置

}