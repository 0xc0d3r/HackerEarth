#include<stdio.h>
#include<math.h>
#include<stdint.h>
typedef uint64_t lldu;
int isPrime(lldu n) {
	if(n<=1) return 0;
	if(n==2) return 1;
	if((n&1) == 0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2) {
		if(n%i == 0) return 0;
	}
	return 1;
}
void generateSpiralMatrix(int n) {
	lldu sm[n][n],num = n*n;
	int fri = 0,fci=0,lci=n,lri=n,i,j;
	while(fri<lri && fci<lci) {
		for(i=lci-1;i>=fci;i--) {
			sm[lri-1][i] = num--;
		}
		lri--;
		for(i=lri-1;i>=fri;i--) {
			sm[i][fci]=num--;
		}
		fci++;
		for(i=fci;i<lci;i++) {
			sm[fri][i]=num--;
		}
		fri++;
		for(i=fri;i<lri;i++) {
			sm[i][lci-1]=num--;
		}
		lci--;
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%llu\t",sm[i][j]);
		}
		printf("\v\n");
	}
	lldu sum = 0;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if( i==j || (i+j) ==n-1) {
				lldu temp = sm[i][j];
				if(isPrime(temp)) sum+=temp;
			}
		}
		printf("%ju\n", sum);
	}
	 //printf("%ju (0x%jx)\n", sum, sum);
}
int main() {
	int t,n,i,j;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		generateSpiralMatrix(n);
	}
}
