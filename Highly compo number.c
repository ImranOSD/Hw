
#include<stdio.h>
int main() {
    int number,count = 0,check = 1;
    scanf("%d",&number);
    for (int i = 1; i<number; i++) {
        if (number % i == 0)count++;
    }
    for (int i = 1; i<number; i++) {
        int flag = 0;
        for (int j=1; j<i; j++) {
            if (i%j==0)flag++;
        }
        if (flag>=count) {
            check = 0;
            break;
        }
    }
    if (check)printf("Highly Composite Number\n");
    else printf("Not Highly Composite Number\n");
    return 0;
}
