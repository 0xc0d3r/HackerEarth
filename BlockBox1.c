#include <stdio.h>
typedef long long int lld;
lld gcd(lld a,lld b){
	while(b>0){
		a=a%b;
		a^=b;
		b^=a;
		a^=b;
	}
	return a;
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--){
   		lld a,b,c;
   		scanf("%lld %lld %lld",&a,&b,&c);
   		puts( gcd(a,gcd(b,c)) ? "YES" : "NO");
   }
}

