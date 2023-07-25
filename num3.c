#include<stdio.h>
int num;    // Global variable
// Using Funciton call
int prime(int num){         // function prime with 1 parameter i.e num
    int i, divi=0;           // local variables
    for (i=1; i<=num; i++){
        if (num % i == 0){
            divi++;      // divi will count the number of divisible
        }
    }
    if (divi > 2)                           // if the accumulated divi is greater than 2, print the not a Prime
        printf("%d is not a Prime\n\n", num);
    else
        printf("%d is a Prime\n\n", num);     // if the accumulated divi is not greater than 2, print the a Prime
}
int main()
{
    num = 1;
    while (num != 0){
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num != 0)
            prime(num);     // Function call to function prinme
    }
    printf("\nEnd of program!");

    return 0;
}