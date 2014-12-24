#include<stdio.h>
double sqrt(double n) {
  int x = n;
  int y = (x + n / x) / 2;
  while (y < x){
    x = y;
    y = (x + n / x) / 2;
	}
  return x;
}
int isPrime(num) {
    if (num<=1)
        return 0;
    if (num==2)
        return 1;
    if(num%2==0)
    	return 0;
    double sRoot = sqrt(num*1.0);
    int i=3;
    while(i<=sRoot){
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main() {
	int t,s,e,su=0,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
		scanf("%d %d",&s,&e);
		for(j=s;j<=e;j++) {
			if (isPrime(j))
				su+=j;
		}
		printf("%d\n",su);
	}
}
