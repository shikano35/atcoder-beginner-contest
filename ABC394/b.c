#include <stdio.h>
#include <string.h>

#define MAX 55

int main() {
  int n;
  char s[MAX][MAX], tmp[MAX];

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%s", s[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (strlen(s[j]) > strlen(s[j + 1])) {
        strcpy(tmp, s[j]);
        strcpy(s[j], s[j + 1]);
        strcpy(s[j + 1], tmp);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%s", s[i]);
  }
  printf("\n");
}