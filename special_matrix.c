#include<stdio.h>
#include<math.h>
int main() {
	int t,n,i,j,sr,sc,moves = 0;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int sm[n][n];
		char ch;
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				scanf(" %c",&ch);
				sm[i][j]=ch;
				if(ch == '*') {
					sr = i;
					sc = j;
				}
			}
		}
		moves = abs(n/2-sr) + abs(n/2-sc);
		printf("%d\n",moves);
	}
}
