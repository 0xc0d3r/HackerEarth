#include<stdio.h>
typedef unsigned long long ull;
ull maxAND(ull a,ull b){
	if(b-a == 1) return a&b;
	else if(!(b&1)) return (b-1)&(b-2);
	else return b&b-1;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		ull a,b;
		scanf("%lld %lld",&a,&b);
		printf("%lld\n",maxAND(a,b));
	}
}
