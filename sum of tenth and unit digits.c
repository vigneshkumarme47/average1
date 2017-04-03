#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,b,k=0;
    scanf("%d",&a);
    for(i=0;i<=1;i++)
    {
        b=a%10;
        a=a/10;
        k=k+b;
    }
    printf("%d",k);


}
