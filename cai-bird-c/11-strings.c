#include <stdio.h>
#include <string.h>

// 结构体，类似于java bean
 struct  Books {
    char title[55];
    char author[33];
    int id;
};
void printBook(struct Books* book);
void printBook2(struct Books book);

 union Data
{
    int id;
    char str[33];
};
/**
 * struct vs union
 * 1. union，只有一个内存单元，最多存一个成员，struct会保留多个成员
*/

// 位域，用于整形、枚举，节省空间
struct Data2 {
    int f1 : 1;
    unsigned f2 : 2;

};

int main()
{
    char site[7] = { 'a','b','c','d','e','f','\0' };
    char sit2[] = "abcabc";//默认添加 \0作为结尾

    int size_a = sizeof(site) / sizeof(site[0]);
    printf("%s,%d \n", site, size_a);
    printf("%s,%d \n", site, strlen(site));// 正确长度，不带\0


    int size_b = sizeof(sit2) / sizeof(sit2[0]);
    printf("%d \n", size_b);

    int a = 3;
    printf("%d \n", a);
    // return 0;

    struct  Books book1;

    // 初始化
    strcpy(book1.author, "tom");
    strcpy(book1.title, "White star");
    book1.id = 3;

    printf("%s", book1.author);

    printBook(&book1);

    printBook2(book1);

    union Data data;
    data.id = 10;
    strcpy(data.str, "hello");


    printf("union %s ", data.str);
    printf("union %d ", data.id);

    puts("------------\n");

    struct Data2 d2;
    d2.f2 = 1;
    d2.f1 = 1;

    printf("%d %d",d2.f2,d2.f1);

    char cs[] ="sdf";
    puts(cs);


}
void printBook(struct Books* book) {
    printf("title %s \n", book->title);
    printf("author %s \n", book->author);

    printf("title %d \n", book->id);
}

void printBook2(struct Books book) {
    printf("title-- %s \n", book.title);
    printf("author %s \n", book.author);

    printf("title %d \n", book.id);

    printf("size  %zu \n", sizeof(book));

}