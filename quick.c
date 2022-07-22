#include<stdio.h>
#include<time.h>
void quicksort(int arr[25],int first,int last)
{

    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<last)
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        for(int p = 0; p<1000000; p++);
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
}
int main()
{
    int i, n;
    clock_t st,ed;
    printf("ENTER ARRAY SIZE =");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ARRAY ELEMENTS");
    for (int j = 0; j < n; j++)
    {
        arr[j] = (rand() % 10000) + 1;
    }
    printf("\n");
    st = clock();
    quicksort(arr,0,n-1);
    ed = clock();

    printf("\nSORTED ELEMNETS = ");
    for(i=0; i<n; i++)
        printf(" %d",arr[i]);
    printf("\n TIME TAKEN = %f \n",difftime(ed,st));
    return 0;
}