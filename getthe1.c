#include<stdio.h>
static int sum=0;
int getOne(int n) {
  int temp = 0,res;
	if(n == 0) {
		if((sum % 10) == sum) res = sum;
		else {
		  n = sum;
		  sum=0;
		  return getOne(n);
		}
	}
	else {
		temp=n%10;
		sum += (temp*temp);
		n/=10;
		return getOne(n);
	}
	return res;
}
int main() {
	int t,i,n,res;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
		scanf("%d",&n);
		res = getOne(n);
		char *msg = (res == 1) ? "YES" : "NO";
		printf("Case #%d:%s\n",i,msg);
		sum=0;
	}
}
