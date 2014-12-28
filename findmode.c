#include<stdio.h>
#include<string.h>
#define SIZE 100000
int arr[SIZE+1];
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int i,max=0;
		for(i=0;i<n;i++) {
			int ele;
			scanf("%d",&ele);
			arr[ele]++;
			if(arr[ele] > max) max = arr[ele];
		}
		for(i=SIZE;i>=0;i--) {
			if(arr[i] ==  max) {
				printf("%d ",i);
			}
		}
		printf("\n");
		memset(arr,0,SIZE*sizeof(int));
	}
	
}
