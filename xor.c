#include<stdio.h>
int xor(int arr[],int s,int e) {
	int i,xor=0;
	for(i=s;i<=e;i++) xor ^= arr[i];
	return xor;
}
int main() {
	int t,i,j,size,q,s,e;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
		scanf("%d",&size);
		int arr[size];
		for(j=0;j<size;j++) scanf("%d",&arr[j]);
		scanf("%d",&q);
		for(j=0;j<q;j++) {
			scanf("%d %d",&s,&e);
			printf("%d\n",xor(arr,s,e));
		}
	}
}
