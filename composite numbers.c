
#include <stdio.h>
int countDivisors(int num) {
 int count = 0;
 for (int i = 1; i <= num; i++) {
 if (num % i == 0) {
 count++;
 }
 }
 return count;
}
int main() {
 int start, end;
 printf("Enter the start of the range: ");
 scanf("%d", &start);
 printf("Enter the end of the range: ");
 scanf("%d", &end);
 printf("Highly composite numbers in the range [%d, %d]:\n", start, end);
 int maxDivisors = 0;
 for (int i = start; i <= end; i++) {
 int divisors = countDivisors(i);
 if (divisors > maxDivisors) {
 maxDivisors = divisors;
 printf("%d (Divisors: %d)\n", i, divisors);
 }
 }
 return 0;
}
