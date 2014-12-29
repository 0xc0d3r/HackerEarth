#include<stdio.h>
#include<math.h>
#define SIZE 1000000
int primeFact[SIZE+1];
void findPrimeFactors(int n) {
	int pi,count=0,i,num;
	num = pi = n;
	while(!(num%2)) {
		count++;
		num/=2;
	}
	for(i=3;i<=sqrt(num);i+=2) {
		while( !(num%i) ) {
			count++;
			num /= i;
		}
	}
	primeFact[pi] = (num>1) ? ++count : count;
}
int main(void) {
	int t,a,b,i;
	scanf("%d",&t);
	for(i=2;i<=SIZE;i++) findPrimeFactors(i);
	for(i=2;i<=SIZE;i++) primeFact[i] += primeFact[i-1];
	while(t--){
		scanf("%d %d",&a,&b);
		printf("%d\n",primeFact[b]-primeFact[a-1]);
	}
}
