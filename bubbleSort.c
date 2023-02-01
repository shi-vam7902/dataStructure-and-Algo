#include <stdio.h>
int main()
{
    int a[] = {15, 21, 17, 34, 45, 6, 78, 25, 3};
    int i, j, temp, x, sorted = 0;
    printf("\n%d", sizeof(a));
    int size = sizeof(a) / sizeof(int);
    printf("Total elements in the array => %d", size);
    printf("Array Before Sorting \n");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    for (i = 1; i < size - 1; i++)
    {
        sorted = 1;
        for (j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("\nPrinting passes %d\n", i + 1);
        for (x = 0; x < size; x++)
        {
            printf(" %d", a[x]);
        }
    }

    printf("Array after Sorting \n");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}