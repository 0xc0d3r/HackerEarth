#include <stdio.h>
typedef long long int lld;
lld ladderToHeaven(lld n){
	lld a=1,b=2,c=a+b,sum=b,even=2;
	while(c<=n){
		a=b;
		b=c;
		c=a+b;
		even++;
		if(!(b&1) ) sum+=b;
	}
	return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    	lld N;
    	scanf("%lld",&N);
    	printf("%lld\n",ladderToHeaven(N));
    }
}


