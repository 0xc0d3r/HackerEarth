#include<stdio.h>
int zeroes=0,ones=0;
int fibonacci(int n){
	if(n<0) return;
	if(n==0){
		zeroes++;
		//printf("0");
		return 0;
	}
	if(n==1){
		ones++;
		//printf("1");
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		fibonacci(n);
		printf("%d %d\n",zeroes,ones);
		zeroes=ones=0;
	}
}
