#include <stdio.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Total sum of N'th position: %d\n", sum);

    return 0;
}