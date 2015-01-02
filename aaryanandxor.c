#include<stdio.h>
int main() {
	int size,n,res=0;
	scanf("%d",&size);
	while(size--){
		scanf("%d",&n);
		res |= n;
	}
	printf("%d\n",res);
}
