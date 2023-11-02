//Program to calculate factorial of a number using a for loop
#include<stdio.h>
 int main()
 {
    int i,n,factorial=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);   
        factorial*=i; // it means factorial*i i.e for n=5 it will print 1*1,1*2,2*3,6*4,24*5=120
    }
    printf("\n Factorial of a given number is %d",factorial);
    return 0;
 }