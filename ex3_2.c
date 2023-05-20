#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int expnd(char s1[],char s2[]);

int main(void)
{
  char src[MAX_LEN], dst[MAX_LEN];
  
  printf("Enter your range e.g. 'a-z': ");
  scanf("%[^\n]", src);
  
  expnd(src, dst);
  
  printf("%s\n", dst);
  
  return 0;
}

int expnd(char s1[], char s2[]) 
{
  int i, j, k=0;
  
  int index=(int)strlen(s1)-1;
  
  for (i=(int)s1[0], j=s1[index]; i<=j; i++) {
    s2[k++] = (char)i;
  }
  s2[k]='\n';

  return 0;
}
