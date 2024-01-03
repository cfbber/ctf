#include <stdio.h>

// 9*9
void f0() {

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        puts("");

    }
}

void f1() {
    int nums = 0;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            for (int k = 1; k < 5; k++) {
                if (i != j && i != k && j != k)
                {
                    printf("%d%d%d\t", i, j, k);
                    nums++;
                }
            }
        }
        puts("");
    }
    printf("nums.. %d", nums);

}

int main()
{
    f0();
    f1();
}

