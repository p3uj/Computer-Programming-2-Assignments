#include<stdio.h>

// Using Function Call
long int factor(int x){   // function factor with 1 parameter i.e x
    long int i, result=1;   // local variables
    for (i=1; i<=x; i++){
        result *= i;
    }
    return result;      // return the value of result to the calling function
}

int main()
{
    int num;
    printf("Enter an integer value: ");
    scanf("%d", &num);
    printf("%d! = %ld\n", num, factor(num));    // Function call to function factor
    return 0;
}
