#include<stdio.h>
int sum(int arr[],int s,int e) {
	int i,sum=0;
	for(i=s;i<=e;i++) sum += arr[i-1];
	return sum;
}
int main() {
	int j,size,q,s,e;
	scanf("%d",&size);
	int arr[size];
	for(j=0;j<size;j++) scanf("%d",&arr[j]);
	scanf("%d",&q);
	for(j=0;j<q;j++) {
		scanf("%d %d",&s,&e);
		printf("%d\n",sum(arr,s,e));
	}
}
