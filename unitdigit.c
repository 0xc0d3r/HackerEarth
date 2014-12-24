#include<stdio.h>
#include<math.h>
int power(int a,int b) {
	int res=1;
	while(b-- >= 1) {
		res*=a;
	}
	return res;
}
void printUnitDigit(int a,int b) {
	int power_cycle[] = {0,1,4,4,2,2,1,4,4,2},r,pc,p;
	r=a%10;
	pc=power_cycle[r];
	if(pc == 0 || pc == 1) {
		printf("%d\n",r);
	}
	else {
		p = b%pc;
		if(p) printf("%d\n",power(r,p)%10);
		else printf("%d\n",power(r,pc)%10);
	}
}
int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&a,&b);
		printUnitDigit(a,b);
	}
}
