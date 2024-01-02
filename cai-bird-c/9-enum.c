#include <stdio.h>

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};// åç»­å€¼ï¼Œinc

enum COLOR { red = 1, green, blue };

int main()
{
    enum DAY day;
    day = WED;
    printf("%d \n", day);
    // return 0;
    for (day = MON; day <= SUN; day++)
    {
        printf("%d \n", day);
    }

    fav();

}

void fav() {
    printf("ÇëÊäÈëÄãÏ²»¶µÄÑÕÉ«: (1. red, 2. green, 3. blue): ");

    enum COLOR color;

    scanf("%u", &color);

    switch (color)
    {
    case red:
        printf("red");
        break;
    case green:
        printf("green");
        break;

    case blue:
        printf("blue");
        break;
    default:
        break;
    }
}