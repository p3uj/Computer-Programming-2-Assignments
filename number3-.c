#include<stdio.h>
#include<string.h>
char createdPass[20], password[20];
int i, tries=3;
int main()
{
    printf("Enter a password to be created: ");                     // Star creating a password
    scanf("%s", &createdPass);                                      //
    printf("The created password is ");                             //
    for (i=0; i<strlen(createdPass); i++)                           // Convert the password entered into '*'
        printf("*");                                                // End

    while (tries!=0){                                               //  Go to this loop as long as tries not equal to 0
        printf("\n\nAllowed %d tries\nEnter a password: ", tries);  //
        scanf("%s", &password);                                     //
        printf("Password entered is ");                             //
        for (i=0; i<strlen(password); i++)                          // Convert the password entered into '*'
            printf("*");                                            // End
        if (strcmp(password, createdPass)==0){                      // Determine if password is equal to created password
            printf("\n\nWelcome to PUP Quezon City!");              // Printing the welcome message
            goto stop;                                              // Force to stop the entire process of the program.
        }                                                           //
        else                                                        //
            printf("\nThe password you've entered is incorrect.");  // Print this if it is not equal to created password
        tries--;                                                    // Decrement the tries value by 1
    }                                                               //
    printf("\n\nIntruder Alert!");                                  // Print this if reach the tries to 0 and enter password is not equal

    stop:
    return 0;
}