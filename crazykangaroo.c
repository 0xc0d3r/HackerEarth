#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		unsigned long long int a,b,m,i;
		scanf("%lld %lld %lld",&a,&b,&m);
		printf("%lld\n",(b/m - (a+m-1)/m +1) );
	}
}
