#include<stdio.h>
#include<string.h>
#include<conio.h>

struct record           // Structure defination
{
    char studNum[10];
    char studName[15];
    float quiz[3];
};

struct record stud_rec[5];  // Structure array declaration
int section, i, j;
float sumRow[5], gradeAve[5], sumCol[4], average[4];

void inputQuiz(){
    for (j=0; j<3; j++){                        // For quizzes
        printf("Enter quiz grade[%d]: ", j+1);  //
        scanf("%f", &stud_rec[i].quiz[j]);      //
        sumRow[i] += stud_rec[i].quiz[j];       // Accumulate all the values of quizzes (row-wise)
    }                                           //
}

void sumColAndAve(){
    // Computing the sum of column and average start here
    for (i=0; i<4; i++){    // Column
        for (j=0; j<5; j++){    // Row
            if (i<3)
                sumCol[i] += stud_rec[j].quiz[i];   // Accumulate all the values of quizzes (column-wise)
            else
                average[i] += gradeAve[j];          // Accumulate all the values of grade average
        }
        if (i<3)
            average[i] = sumCol[i]/5;               // Computing the average of each quizzes
        else
            average[i] = average[i]/5;              // Computing the average of grade average
    }   // End
}

int main(){
    printf("Enter the section: ");
    scanf("%d", &section);
    for (i=0; i<5; i++){                            // Input and Processing
        printf("\nFOR STUDENT %d\nEnter student number: ", i+1);
        scanf("\n");                                //
        gets(stud_rec[i].studNum);                  //
        printf("Enter student name: ");    //
        scanf("\n");                                //
        gets(stud_rec[i].studName);                 //
        inputQuiz();
        gradeAve[i] = sumRow[i]/3;                  // Computing the grade average
    }                                               // End
    sumColAndAve();
    // Display start here
    printf("\t\t\t\tPOLYTECHNIC UNIVERSITY OF THE PHILIPPINES\n\t\t\t\t\t    QUEZON CITY BRANCH\n\n\t\t\t\t\t\tBSIT 1-%d\n", section);
    printf("STUDENT\t\tSTUDENT\t\t\tQUIZ#1\t\tQUIZ#2\t\tQUIZ#3\t\tGRADE\nNUMBER\t\tNAME\t\t\t\t\t\t\t\t\tAVERAGE\n\n");
    for (i=0; i<5; i++){
        printf("%s\t%s\t\t", stud_rec[i].studNum, strupr(stud_rec[i].studName));    // Coverting the string input to upper case
        for (j=0; j<3; j++){
            printf("%.2f\t\t", stud_rec[i].quiz[j]);
        }
        printf("%.2f\n", gradeAve[i]);
    }
    printf("\nAVERAGE\t\t\t\t\t");
    for (i=0; i<4; i++){
        printf("%.2f\t\t", average[i]);
    }
    getch();
    return 0;
}