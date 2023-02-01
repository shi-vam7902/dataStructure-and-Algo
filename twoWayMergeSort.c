#include <stdio.h>
void merge(int a[],int left,int mid,int right){
    int i,j,k;
 const   int size1 = mid - left+1;
    const int size2 = right - mid;

}
void mergeSort(int a[],int left,int right)
{
    int mid = (left+right) /2;
    mergeSort(a,left,mid);
    mergeSort(a,mid+1,right);
    merge(a,left,mid,right);
     
}

int main()
{
    int a[] = {15, 21, 17, 34, 45, 6, 78, 25, 3};
    // int i, j, temp, x, sorted = 0;
    int i;
    printf("\n%d", sizeof(a));
    int size = sizeof(a) / sizeof(int);
    printf("Total elements in the array => %d\n", size);
    printf("Array Before Sorting \n");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    
//logic 
mergeSort(a,size-1,0);
    

    printf("Array after Sorting \n");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}