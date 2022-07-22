// 10. Write a program to print a table of N

#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Enter 2 number : ");
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;i++)
    {
        printf("%d ",n*i);
    }
    return 0;
}