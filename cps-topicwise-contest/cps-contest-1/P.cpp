#include<cstdio>

int main() {
  int x, n;
  scanf("%d%d", &x, &n);
  int la = n * 10;
  int rest = x - la;
  printf("%d\n", rest / 20);
  return 0;
}
