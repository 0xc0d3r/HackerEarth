#include<stdio.h>
int main() {
	long long num;
	do{
		scanf("%lld",&num);
		if(!(num&1)) printf("%lld\n",num);
	}while(num!=-1);
}
