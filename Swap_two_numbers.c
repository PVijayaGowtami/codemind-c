#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b; //a=30
    b=a-b; //b=30-20=10
    a=a-b;  
    printf("%d
%d",a,b);
}