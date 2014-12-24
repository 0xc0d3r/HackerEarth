#include<stdio.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j || i+j == n-1) {
				printf("%c",'*');
				if(j==n-1) printf("%c",10);
			}
			else printf("%c",' ');
		}
	}
	
}
