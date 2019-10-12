#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,a=0;
printf("enter the number-");
scanf("%d",&n);
 for(i=1;i<n;i++)
 {
     if(n%i==0)
     {
        a=a+i;
     }
 }
if(a==n)
{
    printf("the number %d is a perfect number",n);
}
if(a!=n)
{
    printf("the numbers %d is not a perfect number",n);
}
}
