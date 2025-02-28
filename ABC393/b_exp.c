// 入力例 1
// Copy
// AABCC
// 出力例 1
// Copy
// 2
// (i,j,k)=(1,3,5),(2,3,4) の
// 2 つの組が条件を満たします。

#include <stdio.h>
#include <string.h>

#define MAX 110

int main() {
  int count = 0;
  char s[MAX];

  scanf("%s", s);

  for (int i = 0; i < strlen(s); i++) {
    for (int j = i + 1; j < strlen(s); j++) {
      for (int k = j + 1; k < strlen(s); k++) {
        if (j - i == k - j && s[i] == 'A' && s[j] == 'B' && s[k] == 'C') {
          count++;
        }
      }
    }
  }

  printf("%d\n", count);

  return 0;
}