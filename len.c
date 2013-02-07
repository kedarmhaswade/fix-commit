#include <stdio.h>
#include<string.h>
int main() {
  char *s = "You typed \"\"";
  printf("sizeof(s) = %ld\n", sizeof(s));
  printf("strlen(s) = %ld\n", strlen(s));
  printf("%%\n");
  return 0;
}
