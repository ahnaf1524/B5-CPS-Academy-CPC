#include <cstdio>

int main() {
  // your code goes here
  int y;
  scanf("%d", &y);
  int last = y % 100;
  printf("K%02d\n", last);
  return 0;
}

