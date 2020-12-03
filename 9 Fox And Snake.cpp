#include <iostream>
using namespace std;
int main() 
{ int n,m,i,j,k,c=0;
cin>>n>>m;
for(i=0;i<n;i++)
{
               for(j=0;j<m;j++)
               {
                              if(i%2==0)
                              {
                                             for(j=0;j<m;j++)
                                             {cout<<"#";}
                                             cout<<"\n";
                              }
                              else
                              {
                                             if(c==0)
                                             {
                                                            for(j=0;j<m-1;j++)
                                                            {cout<<".";}
                                                            cout<<"#"<<"\n";
                                                            c=1;
                                             }
                                             else
                                             {              cout<<"#";
                                                            for(j=1;j<m;j++)
                                                            {cout<<".";}
                                                            cout<<"\n";
                                                            c=0;
                                             }
                              }
               }
               
}
               return 0;
}
