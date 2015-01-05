#include<stdio.h>
int countOnes(int n){
	int ones=0;
	while(n>0){
		if(n&1) ones++;
		n/=2;
	}
	return ones;
}
int binaryWeight(int n){
	int ones = countOnes(n);
	while(1){
		n++;
		if(countOnes(n) == ones) return n;
	}
	return;
		
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",binaryWeight(n));
	}
}
