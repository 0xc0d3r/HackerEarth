#include<stdio.h>
int sumOfProducts(int n) {
	int i;
	unsigned long long sum = 0;
	for(i=1;i<=n;i++) {
		sum += (n/i)*i;
		if(sum > 1000000007) sum %= 1000000007;
	}
	return sum;
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		printf("%d\n",sumOfProducts(n));
	}
}
