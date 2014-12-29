#include<stdio.h>
int main() {
	int t,ring,swaps,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&ring,&swaps);
		for(i=0;i<swaps;i++) {
			switch(ring){
				case 0:
					ring = 1;
					break;
				case 1:
					ring = 0;
					break;
				case 2:
					ring = 1;
					break;
			}
		}
		printf("%d\n",ring);
	}
}
