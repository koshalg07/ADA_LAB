#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    time_t st,ed;
    int ele,flag = 0;

    for(int i = 0;i<n;i++)
    {
        a[i] = rand();
    }

    for(int k = 0;k<n ;k++)
    {
        printf("%d,",a[k]);
    }

    printf("\n");
    printf("ENTER ELEMENT TO SEARCH \n");
    scanf("%d",&ele);
    st = time(NULL);

    for(int j = 0;j<n;j++)
    {
        for(int p = 0;p<10000000;p++);
        if(a[j] == ele)
        {
            printf("\n ELEMENT FOUND AT %d",j);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("\n ELEMENT NOT FOUND");
    }
    ed = time(NULL);

    printf("\n TIME TAKEN = %f", difftime(ed,st));
    return 0;
}