/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Jiaqi Zhang
 * ID: 201967923
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	int length = strlen(hex);
	for(int i = 0; i < length; i++){
		char num = hex[i];
		int value;
		if(num >= '0' && num <= '9'){
			value = num - '0';
		}else if(num >= 'A' && num <= 'F'){
			value = num - 'A' + 10;
		}else if(num >= 'a' && num <= 'f'){
			value = num - 'a' + 10;
		}else{
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}
		decimal = decimal * 16 + value;
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}