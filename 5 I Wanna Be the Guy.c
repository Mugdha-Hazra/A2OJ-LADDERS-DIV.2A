#include<stdio.h>
 
int main()
{
    int n,p,q,i,flag=0,a1[100]={},a2[100],a3[100];
    scanf("%d%d",&n,&p);
    
    
    for(i=0;i<p;i++)
    {
        scanf("%d",&a2[i]);
    }
    scanf("%d",&q);
    
    for(i=0;i<q;i++)
    {
        scanf("%d",&a3[i]);
    }
    for(i=0;i<p;i++)
    {
        a1[a2[i]-1]=1;
    }
    for(i=0;i<q;i++)
    {
        a1[a3[i]-1]=1;
    }
    for(i=0;i<n;i++)
    {
        if(a1[i]==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    printf("I become the guy.");
    else
    printf("Oh, my keyboard!");
    
}
