#include<stdio.h>
int min(int a,int b){
	return a<=b ? a : b;
}
int main() {
	int n,a,b,i,sum=0;
	scanf("%d%d%d",&n,&a,&b);
	for(i=min(a,b);i<n;i++){
		if(!(i%a) || !(i%b)) {
			sum+=i;
		}
	}
	printf("%d\n",sum);
}
