#include<stdio.h>
#include<string.h>
#define SIZE 256
char* completeString(char s[]) {
	int i;
	int hash[SIZE];
	for(i=0;i<SIZE;i++) {
		hash[i] = 0;
	}
	for(i=0;i<strlen(s);i++) {
		hash[s[i]]++;
	}
	for(i=97;i<123;i++) {
		if (hash[i] == 0) return "NO";
	}
	return "YES";
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char str[128];
		scanf("%s",str);
		printf("%s\n",completeString(str));
	}
}
