#include<stdio.h>
int array[5][5];
int i, j, sum[5];
int main()
{
    for (i=0; i<5; i++)                     // Input the values
        for (j=0; j<5; j++){                //
            printf("Enter an integer: ");   //
            scanf("%d", &array[i][j]);      //
        }                                   // End
    printf("\n");
    for (i=0; i<5; i++){                    // Printing the values
        for (j=0; j<5; j++)                 //
            printf("%5d", array[i][j]);     //
        printf("\n");                       //
    }                                       // End

    printf("\nSUMROW\n");
    for (i=0; i<5; i++){                    // Calculating the sum per row
        sum[i] = 0;                         //
        for (j=0; j<5; j++)                 //
            sum[i] += array[i][j];          //
        printf("%d\n", sum[i]);             // Printing the sum of rows
    }                                       // End

    j=0;
    for (i=0; i<4; i++){                    // Determine if all rows are equal
        if (sum[i]==sum[i+1])               //
            j++;    // j will accumulate the entire rowSum that are equal
    }                                       // End
    if (j==4)                               // Printing if all rows are equal or not
        printf("Row sums are equal");       //
    else                                    //
        printf("Row sums are not equal");   // End

    printf("\n\nSUMCOLUMNS\n");             // Calculating the sum per column
    for (i=0; i<5; i++){                    //
        sum[i] = 0;                         //
        for (j=0; j<5; j++)                 //
            sum[i] += array[j][i];          //
        printf("%d\n", sum[i]);             // Printing the sum of columns
    }                                       // End
    
    j=0;
    for (i=0; i<4; i++){                    // Determine if all columns are equal
        if (sum[i]==sum[i+1])               //
            j++;    // j will accumulate the entire colmSum that are equal
    }                                       // End
    if (j==4)                               // Printing if all columns are equal or not
        printf("Column sums are equal");    //
    else                                    //
        printf("Column sums are not equal");// End
    return 0;
}