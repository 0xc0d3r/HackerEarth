#include<stdio.h>
#include<string.h>
#define SIZE 100001
int main() {
	char s[SIZE];
	scanf("%s",s);
	int q,len=strlen(s);
	scanf("%d",&q);
	while(q--) {
		unsigned long long int a,b;
		scanf("%lld %lld",&a,&b);
		if( s[ (a-1)%len ] != s[ (b-1)%len ] ) printf("No\n");
		else printf("Yes\n");
	}
}
