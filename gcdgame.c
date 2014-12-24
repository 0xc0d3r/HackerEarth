#include<stdio.h>
int gcdGame(int a,int b) {
	while(b>0) {
		a %= b;
		a^=b;
		b^=a;
		a^=b;
	}
	return a;
}
void displayWinner(int a,int b) {
	int turn = 1;
	while(a>1 && b>1) {
		int gcd = gcdGame(a,b);
		if(turn++ & 1) {
			if(gcd >= 1) {
				b = (b>1) ? b-1 : b;
			}
		}
		else {
			if(gcd >= 1) {
				a = (a>1) ? a-1 : a;
			}
			
		}
	}
	if(a==1 && b==1) printf("Draw\n");
	else if(b == 1) printf("Arjit\n");
	else if(a == 1) printf("Chandu Don\n");
}
int main() {
	int t,a,b,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
		scanf("%d %d",&a,&b);
		displayWinner(a,b);
		
	}
	
}
