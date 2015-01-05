#include<stdio.h>
#include<math.h>
int isPrime(int n){
	if(n<=1) return 0;
	if(n==2) return 1;
	if( !(n&1) ) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2){
		if(n%i == 0) return 0;
	}
	return 1;
}
int nearestPrime(int n){
	n = n+1;
	while(1){
		if(isPrime(n)) return n;
		n++;
	}
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",nearestPrime(n));
	}
}
