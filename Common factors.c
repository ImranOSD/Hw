#include <stdio.h>
int main (){
int num 1, num 2;
printf("Enter the first number :");
scanf("%d", &num 1);
printf("Enter the second number:");
scanf("%d", &num2);
printf("Common factors of %d and %d are:", num 1,num 2);
for (int i = 1; i<= num 1 && i<= num 2){

if(num 1 %i == 0 && num 2 %i ==0){
    printf("%d",i);
}
}
return o;
}
