#include<stdio.h>
void toh(int n,char src, char dest, char aux){
    if(n==1){
        printf("\n%c -> %c",src,dest);
        return;
    }
    else{
        toh(n-1,src,aux,dest);
        printf("\n%c -> %c",src,dest);
        toh(n-1,aux,dest,src);
    }
}
int main(){
    int n;
    printf("\nEnter the number of disks");
    scanf("%d",&n);
    printf("The sequence of moves are:\n");
    toh(n,'A','C','B');
}