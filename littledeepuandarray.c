#include<stdio.h>
typedef unsigned long long ll;
int main() {
	int N,i,M;
	scanf("%d",&N);
	ll A[N];
	for(i=0;i<N;i++){
		scanf("%lld",&A[i]);
	}
	scanf("%d",&M);
	while(M--){
		ll X;
		scanf("%lld",&X);
		for(i=0;i<N;i++) {
			if(A[i]>X) A[i]--;
		}
	}
	for(i=0;i<N;i++){
		printf("%lld ",A[i]);
	}
	printf("\n");
}
