//
//    substring.c			Andrew M.
//				21.01.2020


//Задача S-08 Подстроки
//Для заданной строки определить все входящие в неё символы. Например: строка "bccbbbabbadddss" состоит из символов "a","b","с", "d", "s".

#include <stdio.h>
#include <string.h>

#define MAX 500

 int main(void) {

	char array[MAX] = {0};
	int j = 0;
	char c;
	int flag = 0;

	printf("\n\n 		Enter the string\n");
		
	while ((c = getchar()) != '\n') { 
				
		for (int i = 0; i < strlen(array); i++) {
					
			if(array[i] == c)  {
						
				flag++;
			}
					
		}
		    if (flag == 0) {

				array[j++] = c;
			} 
				flag = 0;
	}	
		printf("\n  	Line consists of:   %s\n", array); 
 
 return 0;
}