#include<stdio.h>

int factorial(int number){
    if(number == 1 || number == 0){
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
}

int main(){
    int num;
    printf("Enter number for factorial\n4");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}