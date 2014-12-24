#include<stdio.h>
int main() {
	int l,x,y,songs=0,cur_pos=0;
	scanf("%d %d %d",&l,&x,&y);
	do {
		cur_pos +=x;
		if(l<=cur_pos) {
			printf("%d\n",songs+1);
			break;
		}
		cur_pos-=y;
		songs++;
	}while(l>cur_pos);
}
