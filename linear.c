#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int a[500];
    time_t st,ed;
    int ele,flag = 0;

    for(int i = 0;i<500;i++)
    {
        a[i] = rand()%10000 + 1;
    }

    for(int k = 0;k<500;k++)
    {
        printf("%d,",a[k]);
    }

    printf("\n");
    printf("ENTER ELEMENT TO SEARCH \n");
    scanf("%d",&ele);
    st = time(NULL);

    for(int j = 0;j<500;j++)
    {
        for(int p = 0;p<10000000;p++);
        if(a[j] == ele)
        {
            printf("\n ELEMENT FOUND");
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