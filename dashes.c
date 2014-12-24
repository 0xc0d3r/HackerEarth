#include<stdio.h>
int main() {
	char msg[100];
	scanf("%100s",msg);
	int i,dashes=0;
	for(i=0;msg[i]!='\0';i++) {
		switch(msg[i]) {
			case '0':
				dashes += 6;
				break;
			case '1':
				dashes += 2;
				break;
			case '2':
				dashes += 5;
				break;
			case '3':
				dashes += 5;
				break;
			case '4':
				dashes += 4;
				break;
			case '5':
				dashes += 5;
				break;
			case '6':
				dashes += 6;
				break;
			case '7':
				dashes += 3;
				break;
			case '8':
				dashes += 7;
				break;
			case '9':
				dashes += 6;
				break;
		}
	}
	printf("%d\n",dashes);
}
