// Задача S-09 Отмена Литер

// Задана строка символов. Среди литер этого текста особую роль играет знак #, появление которого означает отмену предыдущей литеры текста;
// k знаков # отменяют k предыдущих литер (если такие есть) Напечатать строку с учетом роли знака #. 
//Например, строка "VR#Y##HELO#LO" должна быть напечатана в виде: "HELLO".


#include <stdio.h>
#include <stdlib.h>

#define MAX 500

 int main(void) {

	char string[MAX] = {0};
	int i = 0;

	printf("\n Vvedite stroku\n");
	 	 
		while ((string[i] = getchar()) != '\n') {
			
			if (string[i] == '#' && i != 0)
				
			i--;
			
			else i++;
		}
	
		printf("\n  %s", string); 
 
 return 0;
}