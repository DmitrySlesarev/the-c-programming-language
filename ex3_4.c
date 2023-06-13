#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int my_itoh(unsigned int n, char *s);
int my_reverse(char *s);

int main(void)
{
  int i,ch;
  unsigned int num;
  char res[MAX];
  
  puts("Enter DEC to convert to HEX:");
  scanf("%d", &num);
  my_itoh(num, res);
  
  i=0;
  printf("HEX: ");
  while ((ch = res[i++]) != '\0'){
    putchar(ch);
  }
  
  return 0;
}

int my_itoh(unsigned int n, char *s)
{
  int i=0;
  
  do {
    s[i++] = (char) (n % 16);
  } while ((n/=16) > 0);
  s[i] = '\0';
  
  for (i=0; i<(int)strlen(s); i++) {
    switch (s[i]) {
      case 1 :
      case 2 :
      case 3 :
      case 4 :
      case 5 :
      case 6 :
      case 7 :
      case 8 :
      case 9 :
        s[i] += '0';
        break;
      case 10:
        s[i] = 'A';
        break;
      case 11:
        s[i] = 'B';
        break;
      case 12:
        s[i] = 'C';
        break;
      case 13:
        s[i] = 'D';
        break;
      case 14:
        s[i] = 'E';
        break;
      case 15:
        s[i] = 'F';
        break;
      default:
        printf("[DEBUG] Error detected");
        break;
    }
  }
  
  my_reverse(s);
  
  return 0;
}

int my_reverse(char *s)
{
  int i, j, tmp;
  
  for (i=0, j=(int)strlen(s)-1; i<j;i++,j--) {
    tmp=s[i];
    s[i]=s[j];
    s[j]=tmp;
  }
  
  return 0;
}
