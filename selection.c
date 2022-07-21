#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int milli_seconds)
{

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        delay(1);
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx =j;

        swap(&arr[min_idx], &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d\t ", arr[i]);
    printf("\n");
}

int main()
{
    int c=1;
    while(c==1)
    {
        int n = 0, choice, key;
        clock_t start, end;
        printf("\nEnter the size of Array : ");
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            arr[j] = (rand() % 10) + 1;
            printf("%4d", arr[j]);
        }
        printf("\nMenu\n 1. Selection Sort\n 2. Exit\nEnter the choice from menu : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = clock();
            n = sizeof(arr) / sizeof(arr[0]);
            selectionSort(arr, n);
            end = clock();
            printf("Sorted array: \n");
            printArray(arr, n);
            printf("Time taken: %f ms\n", (double)(end - start) / CLK_TCK * 1000);
            break;
        case 2:
            c=0;
            exit(0);
        default:
            printf("Invalid Choice !");
            break;
        }
    }
}