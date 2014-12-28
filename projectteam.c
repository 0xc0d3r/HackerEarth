#include<stdio.h>
void sort(int a[],int n) {
	int changed = 1,i;
	while(changed) {
		changed = 0;
		for(i=0;i<n-1;i++) {
			if(a[i] > a[i+1]) {
				a[i] = a[i] +a[i+1] -(a[i+1] = a[i]);
				changed = 1;
			}
		}
	}
	printf("%d\n",formTeam(a,n));
}
int formTeam(int a[],int n) {
	int i,j,max=0,min=10000;
	int tkl[n/2];
	for(i=0,j=n-1;i<j;i++,--j) {
		tkl[i] = a[i]+a[j];
		if(tkl[i] > max) max = tkl[i];
		if(tkl[i] < min)  min = tkl[i];
	}
	return max-min;
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,n);
	}
}
