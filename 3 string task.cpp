 #include<stdio.h>
 #include<string.h>
 int main()
 {
 int i,l;
 char s[101];
 scanf("%s",s);
 l=strlen(s);
 for(i=0; i<l; i++)
 {
  if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y')
  {
   if(s[i]<='Z') s[i]+=32;
   printf(".%c",s[i]);
  }
 }
 printf("\n");
 return 0;
 }
