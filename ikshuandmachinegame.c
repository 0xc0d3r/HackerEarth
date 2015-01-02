#include<stdio.h>
#define SIZE 100000
int comparator(const void *p,const void *q) {
	return ( *(int *)p - *(int *)q );
}
int main() {
	int s,i,count=0,*ptr;
	scanf("%d",&s);
	int L[SIZE];
	for(i=0;i<s;i++){
		scanf("%d",&L[i]);
	}
	ptr=L;
	qsort(L,(size_t)s,sizeof(int),comparator);
	for(i=0;i<s;i++) {
		printf("%d ",L[i]-count++);
	}
	printf("\n");
}
