//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.4
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to display a menu and then ask the user to enter 
 * an option. If 0 is entered, the program terminates.
 * Menu options are:
 * 1 - Coffee
 * 2 - Tea
 * 3 - Cold drinks
 * 0 - to quit
 * When 1 is entered, print "You selected Coffee" and then redisplay the menu.
 * The same applies to other options except 0. When 0 is entered, the program terminates.
 */
    int choice; 
    do{
        printf("\nMenu options are:\n");
        printf("1 - Coffee\n");
        printf("2 - Tea\n");
        printf("3 - Cold drinks\n");
        printf("0 - to quit\n");
        printf("Please chose the drink: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("You selected Coffee");
            break;
            case 2: printf("You selected Tea");
            break;
            case 3: printf("You selected Cold drinks");
            break;
        }
    }while(choice != 0);

    return 0;
}