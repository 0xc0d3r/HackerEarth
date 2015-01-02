#include<stdio.h>
typedef unsigned long long ll;main(){ll x,s;scanf("%lld%lld",&x,&s);if(s>x)s=s+x-(x=s);printf("%lld %lld\n",x,s);}
