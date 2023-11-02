//Program to print fibonacci series using for loop
#include<stdio.h>
void main()
{
    int n, f=0,s=1,i;
    scanf("%d",&n);
    for(i=0;i<10;i++)
{
    printf("%d ",f);
    int next=f+s;
    f=s;
    s=next;
}

}