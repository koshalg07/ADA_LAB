#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int n)
{
    int i, val, j;
    for (i = 1; i < n; i++)
    {
        val = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > val)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = val;
    }
}

int main()
{
    int n;
    printf("ENTER SIZE OF N= ");
    scanf("%d",&n);
    int arr[n];
    for (int j = 0; j < n; j++)
        {
            arr[j] = (rand() % 1000) + 1;
        }
    printf("\nArray element before insertion sort:");
    for(int i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    insertionSort(arr, n);
    printf("After insertion sort");
    for (int i = 0; i < n; i++)
        printf("\n%d ", arr[i]);
    return 0;
}