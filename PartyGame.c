#include<stdio.h>
typedef long long ll;
int comparator(const void *p,const void *q) {
	return ( *(int *)p - *(int *)q );
}
int main() {
	int t,N,i;
	ll X,Y,sum=0;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%d",&X,&Y,&N);
		int cal[N],chef=0,jhool=0;
		for(i=0;i<N;i++){
			scanf("%d",&cal[i]);
		}
		qsort(cal,(size_t)N,sizeof(int),comparator);
		for(i=0;i<N;i++){
			sum+=cal[i];
			if(sum<=X) chef++;
			if(sum<=Y) jhool++;
		}
		sum=0;
		puts(chef>jhool ? "Chef Won" : chef==jhool ? "Tie" : "Jhool Won");
	}
}
