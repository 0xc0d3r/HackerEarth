#include<stdio.h>
int max(int a,int b){
	return a>b?a:b;
}
int maxSum(int a[],int n){
	int prevMax = a[0],curMax=a[0],i;
	for(i=1;i<n;i++){
		curMax = max(curMax+a[i],a[i]);
		prevMax = max(curMax,prevMax);
	}
	return prevMax;
}
int main() {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",maxSum(a,n));
}
