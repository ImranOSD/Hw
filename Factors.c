
#include<stdio.h>
int main(){
    int num,sum = 0;

    printf("Enter a number:");
    scanf("%d", &num);
    for(int i =1; i<=num; i++){
        if(num %i == 0){
            sum +=i;
        }
    }
printf("The sum of all factors of %d is %d .\n", num,sum);
    return 0;
}
