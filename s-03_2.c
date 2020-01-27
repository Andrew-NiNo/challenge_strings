// Вводится строка, вводится символ, Задача найти частоту вхождения вводимого символа в строке

#include <stdio.h>
#include <string.h>

#define MAX 500

 int main(void) {
	 
	char s1[MAX] = {0};
	char s2[2] = {0};
	int counter = 0;
	 
	printf("\n Vvedite stroku\n\n");				//Вводимая строка сохраняется в массив s1
	
	fgets(s1,MAX,stdin);
	 
	printf("\n Vvedite symvol\n\n");				//Вводимый символ сохраняется в массив s2
	 
	gets(s2);
	 
	for (int i = 0; i < strlen(s1); i++) {			//Пока не закончилась строка проверяем совпадение символа с символами строки
		
		if (s2[0] == s1[i]) {
			
			counter++;								//Если есть совпадение, срабатывает счетчик
		}										  
	}
	
	printf("\n %d\n", counter);						//Выводим значение счетчика на экран
	 
 return 0;
 
 }