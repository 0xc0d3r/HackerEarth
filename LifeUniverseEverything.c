#include<stdio.h>
int main() {
	int n = -1;
	while(1) {
		scanf("%d",&n);
		if(n==42) break;
		printf("%d\n",n);
	}
}
