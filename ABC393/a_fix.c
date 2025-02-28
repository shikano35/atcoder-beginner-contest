#include <stdio.h>
#include <string.h>

int main() {
  char s1[10], s2[10];
  scanf("%s %s", s1, s2);

  if (s1[0] == 's' && s2[0] == 's') {
    printf("1\n");
  } else if (s1[0] == 's' && s2[0] == 'f') {
    printf("2\n");
  } else if (s1[0] == 'f' && s2[0] == 's') {
    printf("3\n");
  } else {
    printf("4\n");
  }
  return 0;
}
