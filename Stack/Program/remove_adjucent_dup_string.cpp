#include <stdio.h>
#include <stdlib.h>
#include <string>

void duplicate(char s[])
{
  int s = strlen(s);
  char prev = '\0';
  int k =0;
  
  for(int i=0; i<n; i++)
  {
   if(prev !=s[i])
   {
    s[k++] = s[i];
   }
   prev=s[i]
  }
 s[k] ='\0';
 }
 
 int main(void)
 {
  char s[] ="AAABBCDDD";
  duplicate(s);
  printf("%s", s);
  
  retunr 0;
  }