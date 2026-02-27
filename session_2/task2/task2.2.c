// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(void) {
	 char massage[100];
	 
	 while(1){
		printf("Please enter something: ");
		fgets(massage, sizeof(massage), stdin);
		massage[strcspn(massage, "\n")] = 0;
		if(strcmp(massage, "quit") == 0){
			break;
		}else{
			printf("You entered: %s\n", massage);
		}
	 }
	 
	 return 0;
 }