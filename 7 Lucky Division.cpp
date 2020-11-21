#include <iostream>
using namespace std;
int main()
{int n,r,s=0,c=0,t;
cin>>n;
t=n;
while(n>0)
{r=n%10;
if(r==4||r==7)
{c++;}
s++;
n=n/10;
}
if(s==c||t%4==0||t%7==0)
cout<<"YES\n";
else if(t%44==0||t%444==0||t%77==0||t%777==0||t%47==0||t%74==0||t%447==0||t%774==0||t%474==0||t%774==0)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
