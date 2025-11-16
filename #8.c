#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("Please enter a number: \n");
    scanf("%d", &a);

    if (a > 1000)
    {
        printf("hugely positive\n");
    }
    else if (a >= 100 && a <= 999)
    {
        printf("very positive\n");
    }
    else if (a > 0 && a < 100)
    {
        printf("positive\n");
    }
    else if (a == 0)
    {
        printf("zero\n");
    }
    else if (a < 0)
    {
        printf("negative\n");
    }

    return 0;
}