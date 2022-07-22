#include <stdio.h>
#include <time.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    clock_t start,end;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("\nthe elements of the array\n");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    
 start=clock();
    insertionSort(arr, n);
    end=clock();
    
    printf("\Sorted array: ");
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);
    printf("\n");
 printf("\ntime taken %f ", difftime(end,start));

    return 0;
}