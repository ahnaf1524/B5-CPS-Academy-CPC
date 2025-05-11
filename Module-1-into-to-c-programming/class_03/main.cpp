#include <cstdio>
#include <cstring>

int main() {
  // ---------- Integer Overflow Examples ----------
  int x = 1000000000;     // okay
  x = 2000000000;         // okay: 2 * 10^9
  x = 3000000000;         // overflow: 3 * 10^9 exceeds max for signed int
  printf("%d\n", x);      // may print a garbage or negative value

  // ---------- Size of int ----------
  printf("Size of int: %d bytes\n", sizeof(int));

  // ---------- Signed vs Unsigned Int ----------
  // int can store values from -2^31 to (2^31 - 1)
  // unsigned int stores from 0 to (2^32 - 1)

  // Explanation:
  // signed int uses 1 bit for sign, so only 31 bits store value
  // unsigned int uses all 32 bits for value → no sign → larger positive range

  unsigned int why = 2147483648;  // This is okay for unsigned, not for signed
  printf("%u\n", why);            // Use %u for unsigned int

  // ---------- Long Long Int ----------
  // long long takes 8 bytes = 64 bits
  // signed long long range: -2^63 to (2^63 - 1)

  long long li;

  // li = 18446744073709551616; // invalid: this is 2^64, too big for signed long long
  // li = 9223372036854775808;  // invalid: exceeds 2^63 - 1
  li = 4611686018427387904;      // valid: 2^62 is within range

  li = 1e9; // scientific notation: 1 * 10^9 (like in physics)

  printf("%lld\n", li);  // Print long long with %lld

  // ---------- Floating Point Precision ----------
  // float → less precision (about 6-7 digits)
  // double → higher precision (about 15-17 digits)

  // Some decimal values cannot be exactly represented in binary
  // Example: 10 / 3 = 3.333..., which never ends
  // Multiply back → 3.333... * 3 = 9.999..., not exactly 10

  // That's why float isn't very accurate for precise values
  // Use double for more accurate real numbers

  double dli = 78.34234324;

  // Print with 5 digits after decimal
  printf("%.5lf\n", dli);

  // Print with minimum total width of 10 characters, right-aligned
  printf("%10.5lf\n", dli);

  // ---------- Integer Division ----------
  // int / int = int (always gives integer result)

  // Example 1:
  int xi = 3 / 2;         // result is 1
  printf("%d\n", xi);

  // Example 2:
  float xf = (float) 3 / 2; // explicit typecasting: gives 1.5
  printf("%f\n", xf);

  // ---------- Multiplication ----------
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d\n", a * b);

  // ---------- Get Last Digit ----------
  
  // https://raw.githubusercontent.com/ahnaf1524/tesnepo/refs/heads/main/integer-division-math.jpg
  int num;
  scanf("%d", &num);

  int div = num / 10;       // remove last digit
  int last = num - (div * 10); // get remainder manually (or use num % 10)
  printf("%d\n", last);

  return 0;
}
