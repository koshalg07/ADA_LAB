#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
if (l < r)
{
int m = l+(r-l)/2;
for(int p=0;p<10000000;p++);
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);
merge(arr, l, m, r);
}
}

void printArray(int A[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d ", A[i]);
printf("\n");
}

int main()
{
int n;
clock_t st,ed;
    printf("ENTER SIZE OF = ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ARRAY ELEMENTS = ");
    for (int j = 0; j < n; j++)
        {
            arr[j] = (rand() % 1000) + 1;
            printf("%4d", arr[j]);
        }
     printf("\n");
     st = clock();
mergeSort(arr, 0, n - 1);
ed = clock();
printf("\n %lf",((double)(ed-st))/CLOCKS_PER_SEC);
printf("SORTED ARRAY IS\n");
printArray(arr, n);
return 0;
}