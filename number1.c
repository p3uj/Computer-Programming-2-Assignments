#include<stdio.h>

long int factor(int num){
    long int f=1;
    if (num == 1)
        f=1;
    else
        f=num * factor(num-1);
    return (f);
}

int main()
{
    int num;
    printf("Enter an integer value: ");
    scanf("%d", &num);
    printf("%d! = %ld\n", num, factor(num));
    return 0;
}