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
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 int divisorCount = countDivisors(num);
 printf("The number %d has %d divisors.\n", num, divisorCount);
 return 0;
}
