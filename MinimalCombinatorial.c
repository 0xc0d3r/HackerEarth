#include<stdio.h>
main(){
	int t,i,n,r;
	long long int N;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&r);
		for(i=N=1;i<=r;N*=n-i+1,N/=i,i++);
		printf("%lld\n",N);
	}
}
