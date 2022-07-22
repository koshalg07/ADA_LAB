#include <stdio.h>
#include <time.h>
int binary(int element,int arr[], int start_index, int end_index){
   if (end_index >= start_index){
      int middle = start_index + (end_index - start_index )/2;
      if (arr[middle] == element)
         return middle;
      if (arr[middle] > element)
         return binary( element,arr, start_index, middle-1);
      return binary(element,arr, middle+1, end_index);
   }
   return -1;
}
int main()
{
    clock_t start,end;
    int n;
    int s;
    printf("Enter array size\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = rand();
    }
    printf("The array elements are:");
    for(int i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    printf("\nEnter element to be searched\n");
    scanf("%d",&s);
    start=clock();
    int res= binary(s,arr,0,n-1);
    if(res==-1)
    {
        printf("Element not found");
    }
    else
    printf("Found in position %d", res);
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000000;j++){
           
        }
    }
    end=clock();
    printf("\ntime taken %f ", difftime(end,start)/CLOCKS_PER_SEC);
}