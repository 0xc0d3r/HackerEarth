#include<stdio.h>
int countTrailingZeroes(int n) {
	int zeroes = 0;
	while(n>=5) {
		n/=5;
		zeroes +=n;
	}
	return zeroes;
}
int main() {
	int n;
	scanf("%d",&n);
	printf("%d\n",countTrailingZeroes(n));
}
