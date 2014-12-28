#include<stdio.h>
char *rip21(int n) {
	char *msg[] = {"The streak lives still in our heart!","The streak is broken!"};
	int r,found=0;
	if(n%21 == 0) found = 1;
	while(n>0) {
		r = n%10;
		n/=10;
		if(r == 1) {
			if(n%10 == 2) {
				found = 1;
			}
		}
	}
	return msg[found];
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		printf("%s\n",rip21(n));
	}
}
