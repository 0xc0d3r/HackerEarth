#include <stdio.h>
int hash[130];
int main()
{
   int n,i,count[26]={0},dup_n,spl=0;
   scanf("%d",&n);
   char name[128];
   dup_n = n;
   while(n--){
   		int visited[26]={0};
   		scanf("%s",name);
   		for(i=0;name[i];i++){
   			int tmp=name[i]-97;
   			if( !(visited[tmp]) ){
   				count[tmp]++;
   				visited[tmp]=1;
   			}
   		}
   }
   for(i=0;i<26;i++){
   		if(count[i] == dup_n) spl++;
   }
   printf("%d\n",spl);
}
