#include<stdio.h>
#include<string.h>
int hash[123];
int isAnagram(char a[],char b[]) {
	int i,al=strlen(a),bl=strlen(b),len=0;
	for(i=0;i<al;i++) {
		hash[a[i]]++;
	}
	for(i=0;i<bl;i++) {
		if(hash[b[i]]) {
			len++;
			hash[b[i]]--;
		}
	}
	return (len == al) ? 1 : 0;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		memset(hash,0,123*sizeof(int));
		char a[50000],b[50000];
		scanf("%s %s",a,b);
		puts(isAnagram(a,b) ? "YES" : "NO");
	}
}
