#include<stdio.h>
int pow(int x,int y)
{
  int result = 1,i;
  for(i = 1;i<=y;i++)
     {
        result = result*
     }
  return result;
}
main()
{
    int a,b;
    int power;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    power = pow(a,b);
    printf("\n%d",power);

}