#include<stdio.h>
#include<string.h>
void printArray(int a[],int n ) {
	int i;
	for(i=0;i<n;i++) {
		if(a[i]) printf("%d ",a[i]);
	}
	printf("\n");
}
void asort(int a[],int n) {
	int changed = 1,i;
	while(changed) {
		changed = 0;
		for(i=0;i<n-1;i++) {
			if(a[i] > a[i+1]) {
				a[i] = a[i] + a[i+1] - (a[i+1] = a[i]);
				changed = 1;
			}
		}
	}
	printArray(a,n);
}
void dsort(int a[],int n) {
	int changed = 1,i;
	while(changed) {
		changed = 0;
		for(i=0;i<n-1;i++) {
			if(a[i] < a[i+1]) {
				a[i] = a[i] + a[i+1] - (a[i+1] = a[i]);
				changed = 1;
			}
		}
	}
	printArray(a,n);
}
int main() {
	int n,i,ei=0,oi=0;
	scanf("%d",&n);
	int arr[n],even[n],odd[n];
	for(i=0;i<n;i++) {
		even[i]=odd[i]=0;
	}
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
		if( arr[i] & 1 ) odd[oi++] = arr[i];
		else even[ei++] = arr[i];
	}
	asort(even,n);
	dsort(odd,n);
}
