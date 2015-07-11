#include<stdio.h>
#include<string.h>
#define MAX 1000001
int hash[MAX];
int main() {
	memset(hash,0,sizeof(hash));
	int n,tmp,q,type,x,y,z,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
		hash[tmp]++;
	}
	
	for(i=0;i<MAX;i++){
		printf("%d\n",hash[i]);
	}
}
