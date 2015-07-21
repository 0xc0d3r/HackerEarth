#include <stdio.h>
typedef long long int ll;

ll get_minimum_flips(ll N){
	return (N <= 0 ) ? 0 : (N<=3) ? 1 : (N%3) ? N : N/3;
}

int main(void){
	int t;
	ll N;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&N);
		printf("%lld\n",get_minimum_flips(N));
	}
    return 0;
}
#include<stdio.h>
int main(void) {
	return 0;
}
