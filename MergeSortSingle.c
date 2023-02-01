#include <stdio.h>

void main()
{
    int a[] = {19, 25, 37, 43, 55};
    int b[] = {9, 98, 73, 34, 65};
    int size1 = sizeof(a) / sizeof(int);
    int size2 = sizeof(b) / sizeof(int);
    int size3 = size1 + size2;
    int c[100];
    int i = 0, k = 0, j = 0;
    while (i < size1 && j < size2)
    {

        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }

        while (i < size1)
        {
            c[k++] = a[i++];
        }

        while (i < size2)
        {
            c[k++] = b[j++];
        }
    }
    printf("\n Performing Merge Sort\n");
    for ( i = 0; i < size3; i++)
    {
        printf("  %d",a[i]);
    }
    
}