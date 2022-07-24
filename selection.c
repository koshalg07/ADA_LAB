#include <stdio.h>
#include <time.h>
int main()
{
    int a[100], n, i, position, swap, j;
    clock_t start, end;
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter %d numbers", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    start = clock();
    for (i=0; i<n-1; i++)
    {
        position = i;
        for (j=i+1; j<n; j++)
        {
            if(a[position]>a[j])
            {position = j;}
        }
        if (position != j)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    end = clock();
    printf("Sorted Array\n");
    for (i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Time is %f", difftime(end, start)/CLOCKS_PER_SEC);
    return 0;
}