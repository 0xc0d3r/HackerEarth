#include<stdio.h>
#include<string.h>
char *gameOfWords(char s[]) {
	int i;
	for(i=0;i<strlen(s)-1;i++) {
		if(s[i] == s[i+1]) return "SLAP";
	}
	return "KISS";
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char s[128];
		scanf("%s",s);
		printf("%s\n",gameOfWords(s));
	}
}
