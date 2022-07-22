
#include<stdio.h>
int gcd(int m,int n){
    if(n==0){
        return m;
    }
    else{
        return(gcd(n,(m%n)));
    }
}
int main(){
    int n,m;
    int GCD;
    printf("Enter the values:");
    scanf("%d %d",&m,&n);
    GCD=gcd(m,n);
    printf("The gcd of %d and %d is %d",m,n,GCD);
}