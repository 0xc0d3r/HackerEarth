#include<stdio.h>
int main() {
	int t,n,i;
	scanf("%d",&t);
	while(t--) {
		long long int even=0,odd=0;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
			if(arr[i]&1) odd++;
			else even++;
		}
		printf("%lld\n",even*odd);
	}
	
}
