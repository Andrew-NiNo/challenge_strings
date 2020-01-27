// Входной файл состоит из дВух строк. посчитайте, сколько раз первая строка Встречается В качестВе подстроки Во Второй.
// длина каждой из строк не преВышает 255 симВолоВ.
// пример Входного файла
// abab
// abababcab
//fffabababtabababrecabababf

#include <stdio.h>
#include <string.h>

#define MAX 250

 int main(void) {

	char string[MAX] = {0};
	char sub[MAX] = {0};
	char *i;
	char *p = string;
	int counter = 0;
					
	printf("\n  Vvedite poisk\n\n");						//Вводим подстроку и строку в соответствующие массивы
	
	gets(sub);
				
	printf("\n  Vvedite stroku\n\n");
	
	fgets(string,MAX,stdin);
						
	while (*p) {											//Пока значение строки не 0
		
		if (strlen(sub) <=255 && strlen(string) <=255) {	//И длинна строк не > 255
		
			if (i = strstr(p,sub)) {						//Если есть соответствие, присваиваем полученный адрес от strstr как адрес начала строки
		
				counter++;
	
				p = i;
	
				p++;
			}
			
			else p++;
		}
	}
	 				
	printf("\n  %d", counter);	
	
 return 0;
}