#include <stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		long long int sum=0,a[n];
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum+=a[i];
		}
		printf("%lld\n",sum/n);
	}
}
