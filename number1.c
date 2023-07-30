#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node     // Structure definition
{
    int num;
    struct node *next;
};
struct node *head, *curr, *tail;    // Structure decleration for pointer variable head, curr and tail
int temp;

int main()
{
    head=curr=tail=NULL;    // Initialize these variables to NULL
    curr = (struct node *)malloc(sizeof(struct node));  // Allocate a node

    printf("Enter a value: ");
    scanf("%d", &curr->num);

    while(curr->num > 0){       // If the value of num is greater than 0, then proceed to next statement. If not, then go to the statement after the while structure.
        if (head == NULL){      // The current node (curr) will be the head node if this statement is true.
            head = curr;        
            head->next = NULL;  
            tail = curr;        
        }                       
        else{                   // The current node (curr) will be linked to the preceding node if false.
            tail->next = curr;
            curr->next = NULL;
            tail = curr;
        }
        curr = (struct node *)malloc(sizeof(struct node)); // Allocate a new memory location for curr in preperation for the next input.
        printf("Enter a value: ");
        scanf("%d", &curr->num);
    }
    if (head == NULL){
        printf("No record/s entered!");
        goto stop;
    }
    // Printing the input value in the linear linked list.
    printf("\n\nLinked list data:\n");
    curr = head;
    while (curr != NULL){
        printf("%3d", curr->num);
        curr = curr->next;
    }
    // Sorting the input value in the linear linked list in ascending order.
    curr = head;
    while (curr != NULL){
        tail = curr->next;      // Assign the pointer tail variable where the curr->next is linked until to the NULL.
        while (tail != NULL){
            if (curr->num > tail->num){     // Swap these two value if true.
                temp = tail->num;
                tail->num = curr->num;
                curr->num = temp;
            }
            tail = tail->next;  // Assign the tail pointer variable where the tail->next is linked until to the NULL.
        }
        curr = curr->next;      // Assign the curr pointer variable where the curr->next is linked until to the NULL.
    }
    // Printing the sorted list data.
    printf("\n\nSorted list data:\n");
    curr = head;
    while (curr != NULL){
        printf("%3d", curr->num);
        curr = curr->next;
    }
    stop:
    getch();
    return 0;
}