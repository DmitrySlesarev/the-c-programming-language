#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int my_itob(unsigned int n, char *s);
int  my_reverse(char *s);

int main(void) 
{
  
  unsigned int num;
  char res[MAX];
  int i, ch;
  
  printf("Enter your DEC number: ");
  scanf("%d", &num);
  
  my_itob(num, res);
  
  i=0;
  printf("BIN result: ");
  while ((ch = res[i++]) != '\0') {
    putchar(ch);
  }
  printf("\n");
  
  return 0;
}

int my_itob(unsigned int n, char *s) 
{
  int i = 0;
  
  do {
    s[i++] = (char) n % 2 + '0'; 
  } while ( (n /=2) > 0);
  s[i]='\0';
  
  //printf("INTERIM %s\n", s);
  
  my_reverse(s);

  return 0;
}

int my_reverse(char *s)
{
  int i, j, tmp;
  
  for (i=0, j=(int)strlen(s)-1; i<j; i++, j--) {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
  }
  
  return 0;
}
