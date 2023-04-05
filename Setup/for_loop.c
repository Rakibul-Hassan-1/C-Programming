#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("I love my Country!-->%d\n", i);
    }

    return 0;
}