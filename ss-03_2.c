// Задача S-03 Петя

// Программа должна сделать следующее: в заданной строке, состоящей из заглавных и строчных латинских
// букв, это:
// удаляет все гласные,
// вставляет символ "." перед каждым согласным,
// заменяет все прописные согласные на соответствующие строчные.
// Гласные - это буквы «A», «O», «Y», «E», «U», «I», а остальные согласные. 
//Входные данные программы - ровно одна строка, она должна возвращать выходные данные в виде одной строки, полученной после обработки программой исходной строки.
// Пример
//Вход: tour
//Выход .t.r
//Вход: Codeforces
//Выход: .c.d.f.r.c.s
//Вход: aBAcAba
//Выход: .b.c.b

#include <stdio.h>

 int main( void ) {
	
	int c;
		
	printf("\n  ver.02\n");
	printf("\n  Vvedite stroku\n\n");
	
	while  (( c = getchar()) != '\n') {
				
	    if  ( c == 'A' || c == 'O' || c == 'Y' || c == 'E' || c == 'U' || c == 'I' || 
		
			  c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i' )  {
			
		}
						
	    else if ( c!='\n') {
			
				if (c >= 65 && c <= 90) {
				 
					c += 32;
				}
			 
				putchar('.');
				
				putchar(c);
			}
	}
		
			
 return 0;
}