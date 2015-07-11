/*

Marut loves good strings. According to him, good strings are those which contain either all alphabets of uppercase or lowercase. While he is preparing for his exams, he finds many bad strings in his book and wants to convert them to good strings. But he wants to do this in minimum number of operations.
In one operation, he can pick only one character of any case and convert it to any other case.

As his exams are going on, he wants your help.

Input:
The first line contains an integer T, denoting the number of test cases.
Each test case consists of only one line with a string S which contains uppercase and lowercase alphabets..

Output:
Print the minimum number of operations, in which Marut can obtain a good string.
Print the answer for each test case in new line.

Constraints:
1 ≤ T ≤ 10
If T is not in this range, print "Invalid Test" (without the quotes)
1 ≤ Length of S ≤ 100
S can contain numbers, special characters but no spaces.
If the length of string is not in the above range or it does not contain any alphabets, print "Invalid Input" (without the quotes)

For Example, if the input is:
0
TestString

Print "Invalid Test" (without the quotes)

Sample Input(Plaintext Link)
 3
abcEfg
!@6#2
123A

Sample Output(Plaintext Link)
1
Invalid Input
0

*/



#include<stdio.h>
#include<string.h>
int isLower(char ch){
	return (ch>=97 && ch<=122);
}
int isUpper(char ch){
	return (ch>=65 && ch<=90);
}
int is_marut_string(char s[],int len){
	int lower=0,upper=0,other=0,i;
	for(i=0;i<len;i++){
		if(isLower(s[i])){
			lower++;
		}
		else if(isUpper(s[i])){
			upper++;
		}
		else{
			other++;
		}
	}
	if(len == other) return -1;
	return (upper>lower) ? lower : upper;

}
int main(void) {
	int T;
	scanf("%d",&T);
	char str[128] = {0};
	do{
		scanf("%s",str);
		if(T > 10 || T < 1){
			printf("Invalid Test\n");
			return 0;
		}
		int len = strlen(str);
		if(len > 100){
			printf("Invalid Input\n");
			return 0;
		}
		int res = is_marut_string(str,len);
		printf((res == -1) ? "Invalid Input\n" : "%d\n",res);
	}while(--T);
	return 0;
}