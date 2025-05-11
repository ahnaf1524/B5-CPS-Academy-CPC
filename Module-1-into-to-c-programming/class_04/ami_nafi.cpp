#include <cstdio>

int main() {
    /*
     * Working with integers:
     * Common types: int, long long, unsigned int
     * Example usage:
     *
     * int a, b;
     * scanf("%d%d", &a, &b);
     *
     * Calculating average using different types:
     *
     * float average = (float)(a + b) / 2;
     * double average = (double)(a + b) / 2; // explicit cast
     * double average = (a + b) / 2.0;       // implicit cast due to 2.0 being a double
     *
     * To ensure floating-point division when both a and b are integers:
     * double result = 1.0 * a / b;
     * printf("%d / %d = %.11lf\n", a, b, result); // prints result with high precision
     *
     * Note:
     * - 'int' can usually store values up to approximately 10^9
     * - 'long long' supports larger values, up to around 10^18
     */

    /*
     * Working with characters and ASCII:
     * Each character is stored as an ASCII value behind the scenes.
     * For example, 'A' = 65, 'B' = 66, ..., 'Z' = 90.
     * Same applies to digits: '0' = 48, '1' = 49, ..., '9' = 57.
     */

    char c1, c2;
    scanf("%c%c", &c1, &c2); // Read two characters

    // Subtract ASCII values to get the distance between characters
    int distance = c2 - c1;

    /*
     * Explanation:
     * If user inputs 'A' and 'D', then:
     * c1 = 'A' (ASCII 65)
     * c2 = 'D' (ASCII 68)
     * distance = 68 - 65 = 3
     */

    printf("Distance between %c and %c is %d\n", c2, c1, distance);


    return 0;
}

