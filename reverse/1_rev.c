#include <stdio.h>
#include <string.h>

#define BYTE unsigned char

int main()
{
    int v9 = 0;
    char v8[28];
    strcpy(v8, ":\"AL_RT^L*.?+6/46");
    __int64 v7 = 0x65626D61726168LL;
    int v6 = 7;


    for (int i = 0; i < strlen(v8); ++i)
    {

        // printf("%c", (char)(*((BYTE*)&v7 + i % v6) ^ v8[i]));
        // puts("");
        // printf("%c", (char)(*((BYTE*)&v7 + i % v6)));
        // puts("");
        // printf("%d", (*((BYTE*)&v7 + i % v6)));
        // puts("");
        // printf("%d", (*((BYTE*)&v7)));

        // puts("");
        // printf("%d", ((BYTE*)&v7));
        //         puts("");

        // printf("%d", (&v7));
        printf("%c", (char)(*((char*)&v7 + i % v6) ^ v8[i]));

    }
}