#include<stdio.h>
#define SIZE 100001
int main() {
	int t,i,n,q,s,e;
	scanf("%d",&t);
	int arr[SIZE];
	while(t--){
		scanf("%d",&n);
		arr[0]=0;
		for(i=1;i<=n;i++) {
			scanf("%d",&arr[i]);
			arr[i]^=arr[i-1];
		}
		scanf("%d",&q);
		while(q--){
			scanf("%d %d",&s,&e);
			printf("%d\n",arr[s]^arr[e+1]);
		}
	}
}
