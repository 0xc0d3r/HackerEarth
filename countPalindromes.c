#include<stdio.h>
int isPalindrome(int n){
	int tmp=n,sum=0;
	while(n>0){
		sum = sum*10 + (n%10);
		n/=10;
	}
	return (sum == tmp);
}
int countPalindromes(int a,int b){
	int count=0,num;
	for(num=a;num<=b;num++){
		if(isPalindrome(num)) count++;
	}
	return count;
}
int main() {
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		printf("%d\n",countPalindromes(a,b));
	}
}
