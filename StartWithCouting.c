#include <stdio.h>
#include<string.h>
#define MAX 10001
int hash[MAX];
int main()
{
    int t,n,i,max=-100,ele;
    scanf("%d",&t);
    while(t--){
    	memset(hash,0,sizeof(hash));
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++){
    		scanf("%d",&a[i]);
    		hash[a[i]]++;
    	}
    	for(i=0;i<MAX;i++){
	    	if(hash[i]>max) {
	    		max = hash[i];
	    		ele = i;
	    	}
	    }
	    printf("%d %d\n",ele,max);
	    ele = -100;
	    max = -100;
    }
    
}

