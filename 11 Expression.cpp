#include <iostream>
using namespace std;
int main()
{int a,b,c,p=0,q=0,r=0,s=0,t=0,u=0,m[6],n,i;
cin>>a>>b>>c;
p=a+b+c;
r=a*b*c;
s=(a+b)*c;
t=a*(b+c);
q=a+b*c;
u=a*b+c;
m[0]=p;
m[1]=q;
m[2]=r;
m[3]=s;
m[4]=t;
m[5]=u;
n=m[0];
for(i=0;i<6;i++)
{
               if(m[i]>n)
               n=m[i];
}
cout<<n<<"\n";
               return 0;
}
