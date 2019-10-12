#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    while(n>=5)
     {   c++;
         n=n-5;
         
     }
     while(n>=4)
     {   c++;
         n=n-4;
         
     }
     while(n>=3)
     {   c++;
         n=n-3;
         
     }
     while(n>2)
     {   c++;
         n=n-2;
         
     }
     while(n>1)
     {   c++;
         n=n-1;
         
     }
   cout<<c;
}  