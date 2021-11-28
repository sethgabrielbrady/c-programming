#include <stdio.h>
#include <string.h>

// reverse the word input
int main()
{
  char str[8]; //character size of string
  char reversed[8];
  int i;
  long int len = strlen(str);

  printf("\nType a word\n");
  scanf("%s",str); //reads formatted input
  printf("\nYou typed '%s' \n", str);

  for(i=0; i<len; ++i)
  {
    printf("\n %s \n", str[i]);
    reversed[len-i-1] = str[i];
  }
  printf("\n %s \n", reversed);
  return 0;
}
