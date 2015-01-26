#include<stdio.h>
int main() {
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		printf("%.12lf\n",(float)(a-b)/(a+b));
	}
}
