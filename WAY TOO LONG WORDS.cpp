/* https://codeforces.com/problemset/problem/71/A
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n>0)
  {
     char a[1000];
     int b;
     cin>>a;
     b=strlen(a);
     if(b>10)
     cout<<a[0]<<b-2<<a[b-1]<<"\n";
     else
     cout<<a<<"\n";
     n--;
  }return 0;
}
