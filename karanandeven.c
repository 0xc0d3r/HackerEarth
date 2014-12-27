#include<stdio.h>
int main() {
	int n;
	do {
		scanf("%d",&n);
		if( !(n&1) ) printf("%d\n",n);
	}while(n!=-1);
}
