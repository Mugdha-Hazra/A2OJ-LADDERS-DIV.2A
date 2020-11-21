#include <iostream>
using namespace std;
int main()
{int n,a[1000],i,j,d=0,c=0,s=0,temp=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i];}
 for (i = 0; i < n; i++) {   
        for (j = i+1; j < n; j++) {   
           if(a[i] < a[j]) {  
               temp = a[i];  
               a[i] = a[j];  
               a[j] = temp;  
           }   
        }   
    }  
for(i=0;i<n;i++)
{   d+=a[i];
    c++;
    s=0;
for(j= i + 1; j<n; j++)
{   
               s+=a[j];}
if(d>s)
break;
}cout<<c<<"\n";
return 0;
}
