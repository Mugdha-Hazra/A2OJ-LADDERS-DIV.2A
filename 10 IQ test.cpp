#include <iostream>
using namespace std;
int main()
{int n,a[100000],i,c=0,d=0,p=0,q=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i];}
for(i=0;i<n;i++)
{if(a[i]%2==0)
  { p=i;
  c++;}
 else 
 { q=i;
  d++;}
}
(c>d?cout<<q+1<<"\n":cout<<p+1<<"\n");
               return 0;
}
