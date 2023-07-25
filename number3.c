#include<stdio.h>
int value[50], totalVal, i, num, found;
int main()
{
    printf("How many values you want to input? ");
    scanf("%d", &totalVal);
    for (i=0; i<totalVal; i++){
        printf("Enter an integer: ");
        scanf("%d", &value[i]);
    }
    
    printf("List Contains: ");
    for (i=0; i<totalVal; i++)
        printf("%d ", value[i]);
    printf("\nNumber to be searched is ");
    scanf("%d", &num);
    
    for (i=0; i<totalVal; i++)  // Searching how many values ​​that particular number occurs
        if (num==value[i])      // 
            found+=1;           // found will accumulate all values that are equal to num
    printf("There are %d occurrences of the number %d", found, num);
    return 0;
}