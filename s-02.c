// Написать программу выводящую на экран построчно символ из таблицы АSCI и его код.
// При выводе на экран использовать функцию printf с параметрами форматирования.


#include <stdio.h>

 int main( void ) {
				
	int i;
	int k = 32;  //смещение значения символа для оформления таблицы
		
				
	printf("\nASCII code table\n\n");
				
	for ( i = 0; i < 4; i++) {
			
	printf("  Code    Symbol  ");
		
	}
	
	printf("\n\n");
		
	for ( i = 0; i <= 31; i++) {
							
		printf("%4d %9c\n", i, i);
			
		printf("%22d %9c\n",i + k, i + k);
			
		printf("%40d %9c\n",i + k*2, i + k*2);
			
		printf("%58d %9c\n",i + k*3, i + k*3);
	}
		
 return 0;
}