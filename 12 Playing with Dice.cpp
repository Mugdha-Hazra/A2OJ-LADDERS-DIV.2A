#include <iostream>
using namespace std;
int main() 
{int a,b,c=0,d=0,e=0,i,k,m;
cin>>a>>b;
for(i=1;i<=6;i++)
{k=a-i;
 m=b-i;
if(k<0)
k*=-1;
if(m<0)
m*=-1;
if(k<m)
c++;
else if(k>m)
d++;
else
e++;
}
cout<<c<<" "<<e<<" "<<d<<"\n";
return 0;
}
