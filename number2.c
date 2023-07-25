#include<stdio.h>
#include<math.h>
float num[11];
int i;
int main()
{
    for (i=0; i<11; i++){
        printf("Enter a value: ");
        scanf("%f", &num[i]);
    }
    printf("\n\tBase 2\n\nPower\t\tResult\n");
    for (i=0; i<11; i++){
        printf("%3.0f\t\t%3.0f\n", num[i], pow(2,num[i]));
    }
    return 0;
}