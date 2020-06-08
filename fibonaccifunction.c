#include<stdio.h>
int fibo(int n)
{
   int i,next;
   int t1 = 0, t2 = 1;
   for (i=1;i<=n;i++)
      {
       next = t1 + t2;
       t1 = t2;
       t2 = next;
       printf("%d",next);
      }
}
main()
{
     int fibonacci, num;
     printf("enter the number of terms:");
     scanf("%d",&num);
     fibonacci = fibo(num);

}
