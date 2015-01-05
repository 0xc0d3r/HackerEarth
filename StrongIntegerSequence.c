#include<stdio.h>
#include<string.h>
int hash[101];
int main() {
	int t,N,M,i;
	scanf("%d",&t);
	while(t--){
		memset(hash,0,101*sizeof(int));
		scanf("%d%d",&N,&M);
		int item,strength=0;
		for(i=0;i<N;i++){
			scanf("%d",&item);
			hash[item]++;
		}
		for(i=0;i<M;i++){
			scanf("%d",&item);
			if(hash[item]) strength++;
		}
		printf("%d\n",strength);
	}
}
