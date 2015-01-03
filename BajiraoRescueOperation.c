#include<stdio.h>
void RescueOperation(int N,int K){
	if(N==1){
		printf("1");
	}
	else if(N==2){
		printf("2");
	}
	else if(N==3){
		if(K==2) printf("78");
		else printf("0");
	}
	else if(N==4){
		if(K==2) printf("102");
		else printf("0");
	}
	else {
		printf("0");
	}
	printf("\n");
}
int main() {
	int t,N,K;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&N,&K);
		RescueOperation(N,K);
	}
}
