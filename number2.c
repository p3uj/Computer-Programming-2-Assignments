#include<stdio.h>
// Using Function call
int gcd(int x, int y){      // function gcd with 2 parameters i.e x and y
    int i=1, gcdresult;     // local variables
    while (i <= x && y){                // Go to this loop as long as i is less than or equal to x and y
        if (x % i == 0 && y % i == 0){  // Go to this statement if modulo i of x and y is equal to 0
            gcdresult = i;              // hold the gcdresult
        }                               //
        i++;                            // increment the i by 1
    }                                   // End
    return gcdresult;
}

int main()
{
    int num1, num2;
    printf("Enter a first integer value: ");
    scanf("%d", &num1);
    printf("Enter a second integer value: ");
    scanf("%d", &num2);
    if (num1 && num2 != 0)                                                      // Go to this statement if num1 and num2 is not equal to 0
        printf("The GCD of %d and %d is %d\n\n", num1, num2, gcd(num1,num2));   // Function call to function gcd
    else
        goto stop;    // Force to stop the entire program if num1 or num2 is 0
    while (num1 && num2 != 0){                      // Go to this while loop as long as num1 and num2 is not equal to 0
        printf("Enter a first integer value: ");    //
        scanf("%d", &num1);                         //
        printf("Enter a second integer value: ");   //
        scanf("%d", &num2);                         //
        if (num1 && num2 != 0)                      // Go to this statement if num1 and num2 is not equal to 0
            printf("The GCD of %d and %d is %d\n\n", num1, num2, gcd(num1,num2));   // Function call the function gcd
        else
            goto stop;      // Force to stop the entire program if num1 or num2 is 0
    }                 // End

    stop:
    return 0;
}