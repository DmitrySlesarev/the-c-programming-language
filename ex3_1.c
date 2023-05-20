#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int revstr(char *s);

int main(void)
{
  char arr[MAX];
  
  printf("Enter string to process: ");
  gets(arr);
  
  revstr(arr);
  
  return 0;
}

int revstr(char *s)
{
  int i, j, tmp;
  
  for (i=0, j=(int)strlen(s)-1; i < j; i++, j--) {
      tmp = s[i];
      s[i] = s[j];
      s[j] = tmp;
  }
  
  printf("%s\n", s);
  
  return 0;
}
