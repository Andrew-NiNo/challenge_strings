//Задача S-01 Код символа
// Дан символ D. Вывести два символа, первый из которых предшествует символу D в кодовой таблице ASCI, а второй следует за символом D

#include <stdio.h>

 int main( void ) {
	 
	 int c;
	 
	 int res_1 = 0;
	 
	 int res_2 = 0;
	 
		scanf("%c", &c);
	 
		res_1 = c - 1;
	 
		res_2 = c + 1;
	 
		printf("\n Do '%c' - %c   posle '%c' - %c\n",c, res_1, c, res_2);
	 
 return 0;
 }