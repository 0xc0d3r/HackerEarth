#include<stdio.h>
#include<math.h>
int defuseBomb(int p,int x,int y,int u,int v) {
	if( abs(x+y)%2 != abs(u+v)%2 ) return 0;
	int move;
	if(x == u && y==v) move = 0;
	else if(x-u == y-v || x-u == v-y) move = 1;
	else move = 2;
	return move<p;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int p,x,y,u,v,i;
		scanf("%d %d %d %d %d",&p,&x,&y,&u,&v);
		puts(defuseBomb(p,x,y,u,v) ? "Counter-Terrorists Win !" : "Terrorists Win !");
	}
}
