#include<stdio.h>
int AnkitSum(int n){
	int i,j,sum=0;
	for(i=1;i<=n;i++) {
		for(j=i+1;j<=n;j++) {
			printf("(%d %d) = %d\n",i,j,i+j);
			sum+=i+j;
		}
	}
	return sum+(n*(n+1));
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		printf("%d\n",AnkitSum(n));
	}
}
