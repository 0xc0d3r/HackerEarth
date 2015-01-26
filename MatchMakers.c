#include<stdio.h>
int comparator1(const void *p,const void *q) {
	return ( *(int *)p - *(int *)q );
}
int comparator2(const void *p,const void *q) {
	return ( *(int *)q - *(int *)p );
}
int matchMaker(int g[],int b[],int n){
	int i,count = 0;
	for(i=0;i<n;i++){
		if(g[i]%b[i] == 0 || b[i]%g[i] == 0) count++;
	}
	return count;
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int g[n],b[n],i;
		for(i=0;i<n;i++){
			scanf("%d",&g[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		qsort(g,(size_t)n,sizeof(int),comparator1);
		qsort(b,(size_t)n,sizeof(int),comparator2);
		printf("%d\n",matchMaker(g,b,n));
	}
}
