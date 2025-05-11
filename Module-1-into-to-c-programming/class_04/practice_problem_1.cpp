/*
 * Problem Statement:
 * You are given an exact 4-digit integer.
 * Your task is to extract and print the last two digits of that number.
 *
 * Example:
 * Input:  2589
 * Output: 89
 *
 * Explanation:
 * The last two digits of 2589 are 89.
*/
#include<cstdio>

int main() {

  // Approach 1
  // int n;
  // scanf("%d", &n);
  // int ans = n % 100;
  // printf("%02d\n", ans);

  // Approach 2


  char x, y, z, m; 
  scanf("%c%c%c%c", &x, &y, &z, &m);
  printf("%c%c\n", z, m);

  
  return 0;
}
