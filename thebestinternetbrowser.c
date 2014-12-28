#include<stdio.h>
#include<string.h>
void function(char url[]) {
	int i,tot_len = strlen(url),typed = 0;
	for(i=4;i<tot_len;i++) {
		switch(url[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				break;
			default:
				typed++;
		}
	}
	printf("%d/%d\n",typed+1,tot_len);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char url[256];
		scanf("%s",url);
		function(url);
	}
	
}
