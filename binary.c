#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int bin(int arr[], int l, int r, int x)
{
    for(int p = 0;p<10000000;p++);
if (r >= l)
{
		int mid = l + (r - l)/2;
		if (arr[mid] == x) return mid;
		if (arr[mid] > x) return bin(arr, l, mid-1, x);
		return bin(arr, mid+1, r, x);
}
return -1;
}
int main()
{
    int a[1000],ele,t;
 for(int i = 0;i<1000;i++)
    {
        a[i] = rand()%100000 + 1;
    }

    for(int p=0;p<1000;p++)
    {
        for(int q = 0;q<1001;q++)
        {
            if(a[q]>a[q+1])
            {
                t = a[q];
                a[q] = a[q+1];
                a[q+1] = t;
            }
        }
    }
    for(int k = 0;k<1000;k++)
    {
        printf("\n%d,",a[k]);
    }
int n = sizeof(a)/ sizeof(a[0]);
printf("\n ENTER ELEMENT TO SEARCH \n");
scanf("%d",&ele);
time_t st,ed;
st = time(NULL);
int result = bin(a, 0, n-1, ele);
if(result == -1)
    {
        printf("Element is not present in array");
    }
else
    {
    printf("Element is present at index %d", result);
    }
    ed = time(NULL);

    printf("\n TIME TAKEN = %f", difftime(ed,st));
return 0;
}