#include<stdio.h>
int array[5][5];
int i,j;
int main()
{
    for (i=0; i<5; i++)                 // Input the values
        for (j=0; j<5; j++){            //
            printf("Enter a value: ");  //
            scanf("%d", &array[i][j]);  //
        }                               // End
    
    printf("Original array values are:\n"); // Printing the input values
    for (i=0; i<5; i++){                    //
        for (j=0; j<5; j++)                 //
            printf("%5d", array[i][j]);     //
        printf("\n");                       //
    }                                       // End
    
    for (i=0; i<5; i++)                 // Changing the negative values to zero values
        for (j=0; j<5; j++)             //
            if(array[i][j] < 0)         //
                array[i][j] = 0;        // End
    
    printf("Changed array values are:\n");  // Printing the changed values
    for (i=0; i<5; i++){                    //
        for (j=0; j<5; j++)                 //
            printf("%5d", array[i][j]);     //
        printf("\n");                       //
    }                                       // End
    
    return 0;
}