#include<stdio.h>
int gameOfThrones(int d) {
	int sum=0,num=0,N=1;
	while(sum<d) {
		sum+=N;
		num=N++;
		if(sum == d) return num;
	}
	return num;
}
int main() {
	int t,d;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&d);
		char *s[] = {"SL","LB","BS"};
		printf("%s\n",s[gameOfThrones(d)%3]);
	}
	
}
