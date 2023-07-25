#include<stdio.h>
#include<string.h>
char str[20];
int length, i, equal=1;
int main()
{
    printf("Enter a string: ");
    scanf("%s", &str);
    length = strlen(str);               // get the length of the string
    strupr(str);                        // covert the input values to uppercase
    for (i=0; i<length/2; i++){         // Start
        if (str[i] != (str[length-1-i])){   //
            equal--;                    //
            break;                      // Stop the process of this particular part (for loop)
        }                               //
    }                                   // End
    if (equal==1){                          // Determine and print if the string is a Palindrome or not
        printf("%s is a Palindrome", str);  //
        return 1;                           //
    }else{                                  //
        printf("%s is Not a Palindrome", str);//
        return 0;                           //
    }                                       // End
    return 0;
}
