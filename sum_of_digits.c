//Program to calculate sum of digits of a number using while loop
#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    while(num!=0)
    {
        sum+=num%10; // say num=123, so 123%10=3, so sum=0+3=3
        num=num/10;  // 123/10=12, now again the loop will start until num=0
        
    }
    printf("%d",sum);
    
    return 0;
}