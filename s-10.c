// Задача S-10 Аннаграммы

// Заданы две строки. Определить, являются ли они анаграммами, то есть одна строка получена из другой перестановкой букв.
// Например:
// строки "БУК" и "КУБ" или "СОЛЬ" и "ЛОСЬ" являются анаграммами.

#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int main() {
	
	setlocale(LC_ALL, "");
	
    char charray[100];
    char scharray[100] ;
	
    puts( "  Vvedite pervuy stroku\n");
 
    gets(charray);													// Вводим первую строку

    puts( "\n  Vvedite vtoruy stroku\n");
 
    gets(scharray);													// Вводим вторую строку
 
    if((strlen(charray))!= (strlen(scharray)))						// Сравниваем строки по длинне, если не одинаковые - печатаем No!
																	
        printf( "\n  Result No!");
		
    else {															// Иначе - сравниваем строки на наличие отличных символов
	
        if(strcspn(charray,scharray)) {
			
			puts("\n  Result No!!");											// Если есть такие - печатаем No!!
		}
		
        else  puts("\n  Result Yes ");										// Если таких нет - строки анаграммы. Печатем Yes.
    }
 
 return 0;
}
