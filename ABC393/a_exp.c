#include <stdio.h>
#include <string.h>

int main() {
  char s1[10], s2[10];
  scanf("%s %s", s1, s2);

  if (s1[0] == 's') {
    if (s2[0] == 's') {
      printf("1\n");
    } else {
      printf("2\n");
    }
  } else {
    if (s2[0] == 's') {
      printf("3\n");
    } else {
      printf("4\n");
    }
  }
  return 0;
}