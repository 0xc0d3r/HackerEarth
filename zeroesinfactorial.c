#include<stdio.h>
int factorial_zeroes(int s,int e) {
	register sum = 0,i,r;
	
	for(i=s;i<=e;i++) {
		
		r=i;
		do {
			r/=5;
			sum+=r;
		}while(r>=5);
	}
	return sum;
}
int main(void) {
	int n,i,s,e;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d %d",&s,&e);
		printf("%d\n",factorial_zeroes(s,e));
	}
}
