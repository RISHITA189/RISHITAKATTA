#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int length, width, i, j;

    printf("Enter the length and width of the rectangle : ");
    scanf("%d%d", &length, &width);

    for (i = 0;i < width;i++)
    {
        for (j = 0;j < length;j++)
        {
            if (j == 0 || j == length - 1 || i == 0 || i == width - 1)
            {
                printf("%c", '*');
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}