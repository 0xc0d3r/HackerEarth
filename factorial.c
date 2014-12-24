#include<stdio.h>
typedef long long int lli;
lli factorial(int n) {
	if(n==0 || n==1) return 1;
	else {
		return n*factorial(n-1);
	}
}
int main() {
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
		scanf("%d",&n);
		printf("%lld\n",factorial(n));
	}
}
