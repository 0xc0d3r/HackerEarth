#include<stdio.h>
int totient(int n) {
	int ans=n,i;
	for(i=2;i*i<=n;i++){
		if(n%i==0) ans=ans-ans/i;
		while(n%i==0) n=n/i;
	}
	if(n>1) ans=ans-ans/n;
	return ans;
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",totient(n));
	}
}
