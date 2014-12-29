#include<stdio.h>
#define SIZE 10000
int a[SIZE];
int main() {
	int n,i,diff=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) {
		diff = a[i] - diff;
		if(diff<0) break;
	}
	puts(!diff ? "YES" : "NO");
}
