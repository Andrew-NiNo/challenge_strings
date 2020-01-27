// Задача S-12 Перевертыш
//Входной файл содержит одну строку, В которой записаны фамилия и
//имя человека (разделяющиеся ровно одним пробелом).

// в выходной файл Выведите эту же информацию, однако сначала имя,
// а потом фамилию.

// пример входного файла:
// pUpkIn vasya 

// пример Выходного файла:
// vasya pUpkIn

#include <stdio.h>
#include <string.h>

#define MAX 500

 int main(void) {

	char string[MAX] = {0};
	char *p;
	char *p1;

	printf("\n Vvedite stroku\n");					
	 	 
	fgets(string, MAX, stdin);								// Вводим строку
	
	p = strtok(string, " ");								//Определяем с функцией strtok лексемы и сохраняем их по указателям p и p1
	
	p1 = strtok(NULL, " ");									
 
	printf("\n %s %s\n", p1, p);							//выводим указатели на печать в обратном порядке

 return 0;
}