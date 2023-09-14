
#include <stdio.h>
int sumOfDivisors(int num) {
 int sum = 0;
 for (int i = 1; i <= num / 2; i++) {
 if (num % i == 0) {
 sum += i;
 }
 }

 return sum;
}
int main() {
 int start, end;
 printf("Enter the start of the range: ");
 scanf("%d", &start);
 printf("Enter the end of the range: ");
 scanf("%d", &end);
 printf("Amicable number pairs in the range [%d, %d]:\n", start, end);
 for (int i = start; i <= end; i++) {
 int sum = sumOfDivisors(i);
 if (i != sum && sum >= start && sum <= end && sumOfDivisors(sum) == i) {
 printf("(%d, %d)\n", i, sum);
 }
 }
 return 0;
}
