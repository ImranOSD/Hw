#include<stdio.h>
int main(){
int num;
printf("Enter a positive integer\n");
scanf("%d",&num);
int count = 0;
for (int i =1; i <= num; i++)
{
    if (num%i == 0){
        count = count +1;
    }
}
printf("%d", count);
    return 0;







}

