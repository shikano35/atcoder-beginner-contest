#include <stdio.h>
#include <string.h>

#define MAX 110

int main() {
  char s[MAX], str[MAX];
  scanf("%s", s);
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == '2') {
      printf("%c", s[i]);
    }
  }
  printf("\n");
  return 0;
}